/*
 * XREFs of ?UMPDDrvEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C0117FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1XUMPDOBJ@@QEAA@XZ @ 0x1C0096D9C (--1XUMPDOBJ@@QEAA@XZ.c)
 *     ??0XUMPDOBJ@@QEAA@XZ @ 0x1C0096E08 (--0XUMPDOBJ@@QEAA@XZ.c)
 *     ?vClient@UMPDOBJ@@QEAAXPEAX@Z @ 0x1C0097B58 (-vClient@UMPDOBJ@@QEAAXPEAX@Z.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C0098320 (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

__int64 __fastcall UMPDDrvEnableSurface(struct DHPDEV__ *a1)
{
  UMPDOBJ *v2; // rdi
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rax
  UMPDOBJ *v7; // rcx
  __int64 v8; // rbx
  size_t Size; // [rsp+20h] [rbp-58h]
  UMPDOBJ *v11; // [rsp+30h] [rbp-48h] BYREF
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  _QWORD Src[4]; // [rsp+40h] [rbp-38h] BYREF

  XUMPDOBJ::XUMPDOBJ((XUMPDOBJ *)&v11);
  memset(Src, 0, sizeof(Src));
  v2 = v11;
  if ( v11 )
  {
    Src[0] = 0x300000020LL;
    Src[2] = *(_QWORD *)v11;
    Src[3] = a1;
    LODWORD(Size) = 8;
    v3 = UMPDOBJ::Thunk(v11, Src, 0x20u, &v12, Size);
    v5 = v12;
    if ( v3 == -1 )
      v5 = 0LL;
    if ( v5 )
    {
      LOBYTE(v4) = 5;
      v6 = HmgShareLockCheck(v5, v4);
      v8 = v6;
      if ( v6 )
      {
        if ( *(_WORD *)(v6 + 100) == 1 && (*(_BYTE *)(v6 + 112) & 0x29) != 0x29 )
          v5 = 0LL;
        if ( *((_DWORD *)v2 + 109) )
          UMPDOBJ::vClient(v7, (void *)(v6 + 24));
      }
      else
      {
        v5 = 0LL;
      }
      if ( v8 )
        DEC_SHARE_REF_CNT(v8);
    }
  }
  else
  {
    v5 = 0LL;
  }
  XUMPDOBJ::~XUMPDOBJ(&v11);
  return v5;
}
