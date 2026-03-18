/*
 * XREFs of NtGdiUpdateColors @ 0x1C02965B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0074C40 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C0074ECC (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0075090 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075128 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C007517C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0081778 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0086D44 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0284238 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C029B3AC (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  int v2; // r15d
  __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r10
  __int64 v6; // r9
  struct REGION *v7; // rax
  struct ECLIPOBJ *v8; // rdx
  int updated; // eax
  struct _XLATEOBJ *v11; // [rsp+40h] [rbp-C0h] BYREF
  DC *v12[2]; // [rsp+48h] [rbp-B8h] BYREF
  __m128i rclBounds; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v14[32]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  struct _CLIPOBJ v17; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v18; // [rsp+110h] [rbp+10h]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+140h] [rbp+40h]
  __int64 v21; // [rsp+150h] [rbp+50h]

  v1 = 0;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) )
  {
    v3 = *((_QWORD *)v12[0] + 6);
    v15 = 0LL;
    v16 = 0LL;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v12, 0);
    if ( (*(_DWORD *)(v3 + 2188) & 0x100) != 0 )
    {
      v4 = *((_QWORD *)v12[0] + 64);
      if ( v4 == *(_QWORD *)(v3 + 2568) )
      {
        v5 = *(_QWORD *)(v4 + 128);
        v6 = *((_QWORD *)v12[0] + 12);
        if ( (*((_DWORD *)v12[0] + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)v12, (DC *)((char *)v12[0] + 1448));
        if ( (v14[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v6 + 80) && *(_QWORD *)(v6 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v11, v5, v6);
            if ( v11 )
            {
              v7 = XDCOBJ::prgnEffRao(v12);
              v18 = 0LL;
              v19 = 0;
              v20 = 1;
              v21 = 0LL;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v17, v7, (DC *)((char *)v12[0] + 1448), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
              {
                v2 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v12[0] + 9) & 0xE0) != 0 )
                {
                  rclBounds = (__m128i)v17.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)v12, v8, &rclBounds);
                }
                ++*(_DWORD *)(v4 + 92);
                if ( (*(_DWORD *)(v3 + 32) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v4 + 24), &v17, v11);
                }
                else if ( (*(_DWORD *)(v4 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v3 + 2856))(
                              v4 + 24,
                              v4 + 24,
                              &v17,
                              v11,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v4 + 24,
                              v4 + 24,
                              &v17,
                              v11,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                v2 = updated;
              }
              FreeThreadBufferWithTag(v11);
              v11 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v11);
          }
          else
          {
            v2 = 1;
          }
        }
        else
        {
          v2 = XDCOBJ::bFullScreen((XDCOBJ *)v12);
        }
      }
    }
    v1 = v2;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  return v1;
}
