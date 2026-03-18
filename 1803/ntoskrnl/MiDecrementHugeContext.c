/*
 * XREFs of MiDecrementHugeContext @ 0x14017C0A4
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x14017B574 (MiDeleteZeroThreadContext.c)
 *     MiGetHugePageToZero @ 0x14017B9F8 (MiGetHugePageToZero.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14017BB60 (MiGetUltraHugeAlreadyActive.c)
 * Callees:
 *     MiRemoveFaultNode @ 0x14009DCE0 (MiRemoveFaultNode.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDecrementHugeContext(_QWORD *P)
{
  unsigned int v1; // esi
  __int64 *v4; // rcx
  __int64 v5; // rax
  __int64 **v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rdx

  v1 = 0;
  if ( (*((_DWORD *)P + 47))-- == 1 )
  {
    v4 = P + 9;
    v5 = *v4;
    if ( *v4 )
    {
      if ( *(__int64 **)(v5 + 8) != v4 || (v6 = (__int64 **)v4[1], *v6 != v4) )
        __fastfail(3u);
      *v6 = (__int64 *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      if ( *((_DWORD *)P + 48) != 512 )
      {
        v1 = 1;
        if ( !*((_BYTE *)P + 69) )
        {
          v7 = P[3];
          if ( v7 )
          {
            MiLockPageInline(P[3]);
            *(_BYTE *)(v7 + 34) &= ~8u;
            v8 = *(_QWORD *)(v7 + 16);
            *(_QWORD *)(v8 + 24) = 0LL;
            *(_BYTE *)(v8 + 69) = 1;
            *(_QWORD *)(v7 + 16) = MiMakeDemandZeroPte(4LL);
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v9);
          }
        }
      }
    }
    if ( *((_BYTE *)P + 68) )
      MiRemoveFaultNode((__int64)P);
    ExFreePoolWithTag(P, 0);
  }
  return v1;
}
