/*
 * XREFs of MiDeletePartialCloneVads @ 0x140756210
 * Callers:
 *     MiAllocateChildVads @ 0x1405BF6F8 (MiAllocateChildVads.c)
 *     MiInsertChildVads @ 0x1405BFB04 (MiInsertChildVads.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x14001E7D0 (MiGetProtoPteAddress.c)
 *     MiVadMapsLargeImage @ 0x140062430 (MiVadMapsLargeImage.c)
 *     MmGetSessionIdEx @ 0x1401044E0 (MmGetSessionIdEx.c)
 *     MiFreeVadEvents @ 0x140258BDC (MiFreeVadEvents.c)
 *     MiDecrementLargeSubsections @ 0x14025D3E0 (MiDecrementLargeSubsections.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     MiFreePlaceholderStorage @ 0x140584AB8 (MiFreePlaceholderStorage.c)
 *     MiRemoveSharedCommitNode @ 0x140595640 (MiRemoveSharedCommitNode.c)
 *     MiVadHasSharedCommit @ 0x1405BF9E8 (MiVadHasSharedCommit.c)
 *     MiFreeVadEventBitmap @ 0x14074D260 (MiFreeVadEventBitmap.c)
 *     MiDereferencePerSessionProtos @ 0x140754C70 (MiDereferencePerSessionProtos.c)
 *     MiFreeLargePageView @ 0x14075595C (MiFreeLargePageView.c)
 */

void __fastcall MiDeletePartialCloneVads(_QWORD *P)
{
  _QWORD *v1; // rdi
  _QWORD **v2; // rbx
  _KPROCESS *i; // rbp
  int v4; // eax
  __int64 j; // rsi
  __int64 **v6; // rax
  __int64 *v7; // rsi
  unsigned int SessionId; // eax
  __int64 v9; // r9
  int v10; // ecx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v1 = P;
  v2 = (_QWORD **)P;
  for ( i = KeGetCurrentThread()->ApcState.Process; v1; v2 = (_QWORD **)v1 )
  {
    v1 = (_QWORD *)*v1;
    if ( ((_DWORD)v2[6] & 7) == 4 )
    {
      MiFreeVadEventBitmap(i, (__int64)v2, 4u);
    }
    else if ( MiVadMapsLargeImage((__int64)v2) || (v4 = (_DWORD)v2[6] & 7, v4 == 5) )
    {
      MiFreeLargePageView((__int64)i, (__int64)v2, 1);
    }
    else if ( v4 == 7 )
    {
      if ( *(_QWORD *)(*v2[9] + 64LL) )
      {
        MiGetProtoPteAddress(
          (__int64)v2,
          *((unsigned int *)v2 + 6) | ((unsigned __int64)*((unsigned __int8 *)v2 + 32) << 32),
          0,
          &v12);
        MiGetProtoPteAddress(
          (__int64)v2,
          *((unsigned int *)v2 + 7) | ((unsigned __int64)*((unsigned __int8 *)v2 + 33) << 32),
          0,
          &v11);
        for ( j = v12; ; j = *(_QWORD *)(j + 16) )
        {
          MiDecrementLargeSubsections((volatile LONG **)j, (volatile LONG **)j);
          if ( j == v11 )
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
      MiRemoveSharedCommitNode(*v2[9], (unsigned __int64)i, 0, v9);
    v10 = *((_DWORD *)v2 + 12);
    if ( (v10 & 7) == 2 && (v10 & 0x8000) != 0 )
      --*(_QWORD *)(*(_QWORD *)&i[1].IdealGlobalNode + 352LL);
    MiFreePlaceholderStorage((__int64)v2);
    MiFreeVadEvents((__int64)v2);
    ExFreePoolWithTag(v2, 0);
  }
}
