/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01E3A04
 * Callers:
 *     CreateSpb @ 0x1C011C530 (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01E3A04 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0065820 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x1C0066098 (IntersectWithParents.c)
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00691E0 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006922C (--0UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01E393C (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01E3A04 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v3; // r9
  __int64 i; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF

  v3 = *((_QWORD *)a2 + 22);
  *(_QWORD *)&v10.left = 0LL;
  *(_QWORD *)&v10.right = 0LL;
  if ( !v3 )
  {
LABEL_11:
    if ( a3 )
    {
      for ( i = *((_QWORD *)a2 + 14); i; i = *(_QWORD *)(i + 88) )
      {
        if ( !(unsigned int)SpbTransfer(a1, (struct tagWND *)i, 1) )
          return 0LL;
      }
    }
    return 1LL;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 376LL) + 768LL) & 0x400) == 0 )
  {
    if ( v3 <= 1 )
      v10 = (struct tagRECT)*((_OWORD *)a2 + 8);
    else
      GreGetRgnBox(v3, &v10);
    if ( (unsigned int)IntersectWithParents((__int64)a2, &v10) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
      xxxInternalInvalidate(a2, ghrgnSPB2, 72LL);
      if ( !v9[0] )
      {
        --gdwInAtomicOperation;
        UserAtomicCheck::UnregisterStack((UserAtomicCheck *)v9);
      }
      if ( !(unsigned int)SpbCheckRect2(a1, a2, &v10) )
        return 0LL;
    }
    goto LABEL_11;
  }
  return 1LL;
}
