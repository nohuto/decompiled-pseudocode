/*
 * XREFs of GreDrawEscape @ 0x1C0255A14
 * Callers:
 *     NtGdiDrawEscape @ 0x1C028D050 (NtGdiDrawEscape.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ??1DEVEXCLUDERECT@@QEAA@XZ @ 0x1C0254ADC (--1DEVEXCLUDERECT@@QEAA@XZ.c)
 *     ?vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z @ 0x1C02558C8 (-vExclude@DEVEXCLUDERECT@@QEAAXAEAVXDCOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall GreDrawEscape(HDC a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64); // r14
  unsigned int v10; // eax
  struct REGION *v11; // rax
  DC *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v14[32]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+70h] [rbp-90h]
  __int64 v16; // [rsp+78h] [rbp-88h]
  struct _RECTL v17; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v18[6]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v19[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v20[76]; // [rsp+E4h] [rbp-1Ch] BYREF
  __int64 v21; // [rsp+130h] [rbp+30h]
  int v22; // [rsp+138h] [rbp+38h]
  int v23; // [rsp+160h] [rbp+60h]
  __int64 v24; // [rsp+170h] [rbp+70h]

  v7 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  if ( v13[0]
    && *((_QWORD *)v13[0] + 64)
    && (*(_DWORD *)(*((_QWORD *)v13[0] + 10) + 8LL) & 0x4000) == 0
    && (a2 != 8 || a3 >= 4) )
  {
    v15 = 0LL;
    v16 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v13, 0);
    v8 = *((_QWORD *)v13[0] + 6);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, _BYTE *, struct _RECTL *, unsigned int, __int64))(v8 + 2904);
    if ( v9 )
    {
      if ( a2 != 8 )
      {
        if ( (v14[24] & 1) != 0 )
        {
          v17 = *(struct _RECTL *)((char *)v13[0] + 1448);
          v11 = XDCOBJ::prgnEffRao(v13);
          v21 = 0LL;
          v22 = 0;
          v23 = 1;
          v24 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v19, v11, (struct ERECTL *)&v17, 0);
          if ( ERECTL::bEmpty((ERECTL *)v20) )
          {
            v7 = 1;
          }
          else if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v13[0] + 64) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 64) != 0LL))
                               + 112) & 0x200000) != 0 )
          {
            if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
            {
              GreAcquireSemaphore(ghsemSprite);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
            }
            v18[4] = 0LL;
            DEVEXCLUDERECT::vExclude((DEVEXCLUDERECT *)v18, (struct XDCOBJ *)v13, &v17);
            ++*(_DWORD *)(*((_QWORD *)v13[0] + 64) + 92LL);
            v7 = v9(
                   (*((_QWORD *)v13[0] + 64) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 64) != 0LL),
                   a2,
                   v19,
                   &v17,
                   a3,
                   a4);
            DEVEXCLUDERECT::~DEVEXCLUDERECT(v18);
            if ( (*(_DWORD *)(v8 + 32) & 1) != 0 )
            {
              EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
              GreReleaseSemaphoreInternal(ghsemSprite);
            }
          }
          goto LABEL_20;
        }
        v10 = XDCOBJ::bFullScreen((XDCOBJ *)v13);
        goto LABEL_12;
      }
      if ( (*(_DWORD *)(SURFOBJ_TO_SURFACE_NOT_NULL((*((_QWORD *)v13[0] + 64) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 64) != 0LL))
                      + 112) & 0x200000) != 0 )
      {
        v10 = v9((*((_QWORD *)v13[0] + 64) + 24LL) & -(__int64)(*((_QWORD *)v13[0] + 64) != 0LL), 8LL, 0LL, 0LL, a3, a4);
LABEL_12:
        v7 = v10;
      }
    }
LABEL_20:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return v7;
}
