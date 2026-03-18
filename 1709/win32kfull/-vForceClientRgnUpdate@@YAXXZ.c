/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1C02665D8
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C008C12C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C0257078 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C0295150 (NtGdiSetPixelFormat.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     GreClientRgnUpdated @ 0x1C0072A88 (GreClientRgnUpdated.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00EB328 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00F7C04 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0143530 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0145690 (_guard_dispatch_icall_nop.c)
 *     UserGetClientRgn @ 0x1C01C59B4 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C0264A88 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C02669B0 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0266BD0 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void vForceClientRgnUpdate(void)
{
  __int64 v0; // r9
  TRACKOBJ *v1; // rsi
  int v2; // eax
  __int64 i; // rdi
  int v4; // eax
  unsigned int v5; // eax
  unsigned __int64 v6; // rcx
  HRGN ClientRgn; // rax
  HRGN v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  LONG v11; // edx
  BOOL v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct _POINTL v15; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v17[3]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v18[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v19; // [rsp+68h] [rbp-9h] BYREF
  __int64 v20; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v21[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v22; // [rsp+88h] [rbp+17h] BYREF
  __int128 v23; // [rsp+98h] [rbp+27h] BYREF
  __int128 v24; // [rsp+A8h] [rbp+37h] BYREF

  v20 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  v1 = gpto;
  if ( gpto )
  {
    while ( 1 )
    {
      v2 = *((_DWORD *)v1 + 12);
      if ( (v2 & 0x40000000) != 0 )
        break;
      v1 = (TRACKOBJ *)*((_QWORD *)v1 + 1);
      if ( !v1 )
        goto LABEL_4;
    }
    *((_DWORD *)v1 + 12) = v2 & 0x3FFFFFFF | 0x80000000;
    for ( i = *((_QWORD *)v1 + 3); i; i = *(_QWORD *)(i + 160) )
    {
      v4 = *(_DWORD *)(i + 184);
      if ( (v4 & 0x40000000) != 0 )
      {
        v5 = v4 & 0x3FFFFFFF | 0x80000000;
        *(_DWORD *)(i + 184) = v5;
        v6 = *(_QWORD *)(i + 176);
        if ( v6 )
        {
          ClientRgn = UserGetClientRgn(v6, (__int64)&v24, v5 & 0x20, v0);
        }
        else
        {
          v24 = *(_OWORD *)((char *)v1 + 52);
          ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v24);
        }
        v8 = ClientRgn;
        if ( !ClientRgn )
          break;
        GreSetRegionOwner(ClientRgn, 0LL);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v17, v8, 0);
        if ( v17[0] )
        {
          if ( (*(_DWORD *)(i + 184) & 0x100) == 0 )
          {
            v9 = *(_QWORD *)(*(_QWORD *)(i + 168) + 32LL);
            v10 = *(_QWORD *)(v9 + 48);
            if ( v10 )
            {
              if ( v9 == *(_QWORD *)(v10 + 2568) )
              {
                v11 = -*(_DWORD *)(v10 + 2604);
                v15.x = -*(_DWORD *)(v10 + 2600);
                v15.y = v11;
                if ( v15.x || v11 )
                {
                  RGNOBJ::bOffset((RGNOBJ *)v17, &v15);
                  LODWORD(v24) = v15.x + v24;
                  DWORD2(v24) += v15.x;
                  DWORD1(v24) += v15.y;
                  HIDWORD(v24) += v15.y;
                }
              }
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v16);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v16);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
            if ( v16[0] )
            {
              if ( v18[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v18, (struct _RECTL *)((char *)v1 + 52));
                RGNOBJ::bCopy((RGNOBJ *)v16, (struct RGNOBJ *)v17);
                RGNOBJAPI::iCombine((RGNOBJAPI *)v17, (struct RGNOBJ *)v16, (struct RGNOBJ *)v18, 1);
                if ( RGNOBJ::iCombine((RGNOBJ *)v16, (struct RGNOBJ *)v17, (struct RGNOBJ *)v18, 1) )
                  RGNOBJAPI::bSwap((RGNOBJAPI *)v17, (struct RGNOBJ *)v16);
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v16);
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v21);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v21);
          v12 = 0;
          if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && v21[0] )
            v12 = RGNOBJ::bCopy((RGNOBJ *)v21, (struct RGNOBJ *)v17) != 0;
          v22 = *(_QWORD *)(i + 200);
          GreAcquireSemaphore(v22);
          if ( v12 )
          {
            v19 = *(_QWORD *)(i + 192);
            if ( v19 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v21, (struct RGNOBJ *)&v19);
              *(_QWORD *)(i + 192) = v19;
            }
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v17, (struct RGNOBJ *)(i + 56));
          v13 = *(_QWORD *)(i + 56);
          *(_DWORD *)(v13 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
          v14 = *(_QWORD *)(i + 56);
          v23 = v24;
          EWNDOBJ::vSetClip(i, v14, &v23);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v17);
          if ( (*((_DWORD *)v1 + 12) & 1) != 0 )
            TRACKOBJ::vUpdateDrvDelta(v1, (struct EWNDOBJ *)i, 1u);
          if ( (*((_DWORD *)v1 + 12) & 2) != 0 )
            (*((void (__fastcall **)(__int64))v1 + 5))(i);
          vSpWndobjChange(*(HDEV *)(*((_QWORD *)v1 + 4) + 48LL), (struct EWNDOBJ *)i);
          SEMOBJ::vUnlock((SEMOBJ *)&v22);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v21);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v17);
        SEMOBJ::vUnlock((SEMOBJ *)&v20);
        GreClientRgnUpdated(1);
        return;
      }
    }
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v20);
}
