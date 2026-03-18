/*
 * XREFs of ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30
 * Callers:
 *     CreateSpb @ 0x1C0125804 (CreateSpb.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     xxxInternalInvalidate @ 0x1C0069C80 (xxxInternalInvalidate.c)
 *     IntersectWithParents @ 0x1C006A4F4 (IntersectWithParents.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C006E870 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C006E8C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     ?SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z @ 0x1C01EF968 (-SpbCheckRect2@@YAHPEAUtagSPB@@PEAUtagWND@@PEAUtagRECT@@K@Z.c)
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C01EFA30 (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 */

__int64 __fastcall SpbTransfer(struct tagSPB *a1, struct tagWND *a2, int a3)
{
  unsigned __int64 v5; // rcx
  __int64 i; // rbx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF

  v5 = *((_QWORD *)a2 + 22);
  if ( !v5 )
  {
LABEL_9:
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
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 2) + 400LL) + 776LL) & 0x400) == 0 )
  {
    *(_QWORD *)&v10.left = 0LL;
    *(_QWORD *)&v10.right = 0LL;
    if ( v5 <= 1 || (unsigned int)GreGetRgnBox(v5, &v10) )
      v10 = (struct tagRECT)*((_OWORD *)a2 + 8);
    if ( (unsigned int)IntersectWithParents((__int64)a2, &v10) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v9);
      xxxInternalInvalidate(a2, ghrgnSPB2, 0x48u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v9);
      if ( !(unsigned int)SpbCheckRect2(a1, a2, &v10) )
        return 0LL;
    }
    goto LABEL_9;
  }
  return 1LL;
}
