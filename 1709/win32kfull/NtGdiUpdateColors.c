/*
 * XREFs of NtGdiUpdateColors @ 0x1C0292C60
 * Callers:
 *     <none>
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C00183B8 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C0022CA0 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C002BE58 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C002BF34 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C002C0E0 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C002C160 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C002C1B4 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     ?MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C0280DB8 (-MulUpdateColors@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z @ 0x1C0297B5C (--0XLATEMEMOBJ@@QEAA@VXEPALOBJ@@0@Z.c)
 */

__int64 __fastcall NtGdiUpdateColors(HDC a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // r10
  __int64 v5; // r9
  struct REGION *v6; // rax
  struct ECLIPOBJ *v7; // rdx
  unsigned int updated; // eax
  struct _XLATEOBJ *v10; // [rsp+48h] [rbp-C0h] BYREF
  DC *v11; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v12[4]; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v13[32]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v14; // [rsp+98h] [rbp-70h]
  int v15; // [rsp+A0h] [rbp-68h]
  int v16; // [rsp+A4h] [rbp-64h]
  struct _CLIPOBJ v17; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v18; // [rsp+118h] [rbp+10h]
  int v19; // [rsp+120h] [rbp+18h]
  int v20; // [rsp+148h] [rbp+40h]
  __int64 v21; // [rsp+158h] [rbp+50h]

  v1 = 0;
  DCOBJ::DCOBJ((DCOBJ *)&v11, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)&v11) )
  {
    v2 = *((_QWORD *)v11 + 6);
    v14 = 0LL;
    v15 = 0;
    v16 = 0;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v13, (struct XDCOBJ *)&v11, 0);
    if ( (*(_DWORD *)(v2 + 2188) & 0x100) != 0 )
    {
      v3 = *((_QWORD *)v11 + 64);
      if ( v3 == *(_QWORD *)(v2 + 2568) )
      {
        v4 = *(_QWORD *)(v3 + 128);
        v5 = *((_QWORD *)v11 + 12);
        if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
          XDCOBJ::vAccumulate((XDCOBJ *)&v11, (DC *)((char *)v11 + 1448));
        if ( (v13[24] & 1) != 0 )
        {
          if ( *(_QWORD *)(v5 + 80) && *(_QWORD *)(v5 + 88) )
          {
            XLATEMEMOBJ::XLATEMEMOBJ(&v10, v4, v5);
            if ( v10 )
            {
              v6 = XDCOBJ::prgnEffRao(&v11);
              v18 = 0LL;
              v19 = 0;
              v21 = 0LL;
              v20 = 1;
              XCLIPOBJ::vSetup((XCLIPOBJ *)&v17, v6, (DC *)((char *)v11 + 1448), 0);
              if ( ERECTL::bEmpty((ERECTL *)&v17.rclBounds) )
              {
                v1 = 1;
              }
              else
              {
                if ( (*((_DWORD *)v11 + 9) & 0xE0) != 0 )
                {
                  *(RECTL *)&v12[1] = v17.rclBounds;
                  XDCOBJ::vAccumulateTight((XDCOBJ *)&v11, v7, (__m128i *)&v12[1]);
                }
                ++*(_DWORD *)(v3 + 92);
                if ( (*(_DWORD *)(v2 + 32) & 0x20000) != 0 )
                {
                  updated = MulUpdateColors((struct _SURFOBJ *)(v3 + 24), &v17, v10);
                }
                else if ( (*(_DWORD *)(v3 + 112) & 0x400) != 0 )
                {
                  updated = (*(__int64 (__fastcall **)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))(v2 + 2856))(
                              v3 + 24,
                              v3 + 24,
                              &v17,
                              v10,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                else
                {
                  updated = ((__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, RECTL *, RECTL *))EngCopyBits)(
                              v3 + 24,
                              v3 + 24,
                              &v17,
                              v10,
                              &v17.rclBounds,
                              &v17.rclBounds);
                }
                v1 = updated;
              }
              FreeThreadBufferWithTag(v10);
              v10 = 0LL;
            }
            EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v10);
          }
          else
          {
            v1 = 1;
          }
        }
        else
        {
          v1 = XDCOBJ::bFullScreen((XDCOBJ *)&v11);
        }
      }
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v13);
  }
  if ( v11 )
    XDCOBJ::vUnlockFast((XDCOBJ *)&v11);
  return v1;
}
