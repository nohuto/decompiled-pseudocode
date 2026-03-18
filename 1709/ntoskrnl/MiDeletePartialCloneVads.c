/*
 * XREFs of MiDeletePartialCloneVads @ 0x1406EC69C
 * Callers:
 *     MiAllocateChildVads @ 0x14057AC60 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x14057B0BC (MiInsertChildVads.c)
 * Callees:
 *     MiVadMapsLargeImage @ 0x140015000 (MiVadMapsLargeImage.c)
 *     MiGetProtoPteAddress @ 0x140040460 (MiGetProtoPteAddress.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiFreeVadEvents @ 0x14021CA00 (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x140222780 (MiDecrementLargeSubsections.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     MiRemoveSharedCommitNode @ 0x1404D0D00 (MiRemoveSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x14057AFC0 (MiVadHasSharedCommit.c)
 *     MiFreeVadEventBitmap @ 0x1406E26F4 (MiFreeVadEventBitmap.c)
 *     MiDereferencePerSessionProtos @ 0x1406EB3BC (MiDereferencePerSessionProtos.c)
 *     MiFreeLargePageView @ 0x1406EBEE4 (MiFreeLargePageView.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _QWORD **v2; // rbx
  _KPROCESS *i; // rbp
  int v4; // edx
  __int64 j; // rsi
  __int64 **v6; // rax
  __int64 *v7; // rsi
  unsigned int SessionId; // eax
  int v9; // ecx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  v1 = P;
  v2 = (_QWORD **)P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = (_QWORD **)v1 )
  {
    v1 = (_QWORD *)*v1;
    if ( ((_DWORD)v2[6] & 7) == 4 )
    {
      MiFreeVadEventBitmap(i, (__int64)v2, 4);
    }
    else if ( MiVadMapsLargeImage((__int64)v2) || v4 == 5 )
    {
      MiFreeLargePageView((__int64)i, (__int64)v2, 2);
    }
    else if ( v4 == 7 )
    {
      if ( *(_QWORD *)(*v2[9] + 64LL) )
      {
        MiGetProtoPteAddress(
          (__int64)v2,
          *((unsigned int *)v2 + 6) | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32),
          0,
          &v11);
        MiGetProtoPteAddress(
          (__int64)v2,
          *((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
          0,
          &v10);
        for ( j = v11; ; j = *(_QWORD *)(j + 16) )
        {
          MiDecrementLargeSubsections((volatile LONG **)j, (volatile LONG **)j);
          if ( j == v10 )
            break;
        }
      }
    }
    else if ( v4 == 2 )
    {
      v6 = (__int64 **)v2[9];
      v7 = *v6;
      if ( ((*v6)[7] & 0x4000000) != 0 )
      {
        SessionId = MmGetSessionIdEx((__int64)i);
        MiDereferencePerSessionProtos(v7, SessionId);
      }
    }
    if ( (unsigned int)MiVadHasSharedCommit((__int64)v2) )
      MiRemoveSharedCommitNode(*v2[9], (unsigned __int64)i, 0);
    v9 = *((_DWORD *)v2 + 12);
    if ( (v9 & 7) == 2 && (v9 & 0x10000) != 0 )
      --*(_QWORD *)(*(_QWORD *)&i[1].IdealGlobalNode + 248LL);
    MiFreeVadEvents((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
