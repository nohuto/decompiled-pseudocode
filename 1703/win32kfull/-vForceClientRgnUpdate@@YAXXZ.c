/*
 * XREFs of ?vForceClientRgnUpdate@@YAXXZ @ 0x1C0267808
 * Callers:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C00150D4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ?iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z @ 0x1C02555A8 (-iWndObjSetupExtEscape@@YAHAEAVDCOBJ@@HHPEAXH1@Z.c)
 *     NtGdiSetPixelFormat @ 0x1C0298AC0 (NtGdiSetPixelFormat.c)
 * Callees:
 *     GreClientRgnUpdated @ 0x1C006CC5C (GreClientRgnUpdated.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00875DC (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009C064 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01400F0 (_guard_dispatch_icall_nop.c)
 *     UserGetClientRgn @ 0x1C01C2CA0 (UserGetClientRgn.c)
 *     ?vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C02656E0 (-vSpWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z @ 0x1C0267BE0 (-vSetClip@EWNDOBJ@@QEAAXPEAVREGION@@VERECTL@@@Z.c)
 *     ?vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z @ 0x1C0267E00 (-vUpdateDrvDelta@TRACKOBJ@@QEAAXPEAVEWNDOBJ@@K@Z.c)
 */

void vForceClientRgnUpdate(void)
{
  TRACKOBJ *v0; // rsi
  int v1; // eax
  __int64 i; // rdi
  int v3; // eax
  unsigned int v4; // eax
  unsigned __int64 v5; // rcx
  HRGN ClientRgn; // rax
  HRGN v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  LONG v10; // edx
  BOOL v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rdx
  struct _POINTL v14; // [rsp+28h] [rbp-49h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-31h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v18; // [rsp+68h] [rbp-9h] BYREF
  __int64 v19; // [rsp+70h] [rbp-1h] BYREF
  _QWORD v20[2]; // [rsp+78h] [rbp+7h] BYREF
  __int64 v21; // [rsp+88h] [rbp+17h] BYREF
  __int128 v22; // [rsp+98h] [rbp+27h] BYREF
  __int128 v23; // [rsp+A8h] [rbp+37h] BYREF

  v19 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  v0 = gpto;
  if ( gpto )
  {
    while ( 1 )
    {
      v1 = *((_DWORD *)v0 + 12);
      if ( (v1 & 0x40000000) != 0 )
        break;
      v0 = (TRACKOBJ *)*((_QWORD *)v0 + 1);
      if ( !v0 )
        goto LABEL_4;
    }
    *((_DWORD *)v0 + 12) = v1 & 0x3FFFFFFF | 0x80000000;
    for ( i = *((_QWORD *)v0 + 3); i; i = *(_QWORD *)(i + 160) )
    {
      v3 = *(_DWORD *)(i + 184);
      if ( (v3 & 0x40000000) != 0 )
      {
        v4 = v3 & 0x3FFFFFFF | 0x80000000;
        *(_DWORD *)(i + 184) = v4;
        v5 = *(_QWORD *)(i + 176);
        if ( v5 )
        {
          ClientRgn = UserGetClientRgn(v5, &v23, v4 & 0x20);
        }
        else
        {
          v23 = *(_OWORD *)((char *)v0 + 52);
          ClientRgn = (HRGN)GreCreateRectRgnIndirect(&v23);
        }
        v7 = ClientRgn;
        if ( !ClientRgn )
          break;
        GreSetRegionOwner(ClientRgn, 0LL);
        RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, v7, 0);
        if ( v16[0] )
        {
          if ( (*(_DWORD *)(i + 184) & 0x100) == 0 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)(i + 168) + 32LL);
            v9 = *(_QWORD *)(v8 + 48);
            if ( v9 )
            {
              if ( v8 == *(_QWORD *)(v9 + 2568) )
              {
                v10 = -*(_DWORD *)(v9 + 2604);
                v14.x = -*(_DWORD *)(v9 + 2600);
                v14.y = v10;
                if ( v14.x || v10 )
                {
                  RGNOBJ::bOffset((RGNOBJ *)v16, &v14);
                  LODWORD(v23) = v14.x + v23;
                  DWORD2(v23) += v14.x;
                  DWORD1(v23) += v14.y;
                  HIDWORD(v23) += v14.y;
                }
              }
            }
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
            RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
            RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
            if ( v15[0] )
            {
              if ( v17[0] )
              {
                RGNOBJ::vSet((RGNOBJ *)v17, (struct _RECTL *)((char *)v0 + 52));
                RGNOBJ::bCopy((RGNOBJ *)v15, (struct RGNOBJ *)v16);
                RGNOBJAPI::iCombine((RGNOBJAPI *)v16, (struct RGNOBJ *)v15, (struct RGNOBJ *)v17, 1);
                if ( RGNOBJ::iCombine((RGNOBJ *)v15, (struct RGNOBJ *)v16, (struct RGNOBJ *)v17, 1) )
                  RGNOBJAPI::bSwap((RGNOBJAPI *)v16, (struct RGNOBJ *)v15);
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
          }
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
          v11 = 0;
          if ( (*(_DWORD *)(i + 184) & 0x200) != 0 && v20[0] )
            v11 = RGNOBJ::bCopy((RGNOBJ *)v20, (struct RGNOBJ *)v16) != 0;
          v21 = *(_QWORD *)(i + 200);
          GreAcquireSemaphore(v21);
          if ( v11 )
          {
            v18 = *(_QWORD *)(i + 192);
            if ( v18 )
            {
              RGNOBJ::vSwap((RGNOBJ *)v20, (struct RGNOBJ *)&v18);
              *(_QWORD *)(i + 192) = v18;
            }
          }
          RGNOBJAPI::bSwap((RGNOBJAPI *)v16, (struct RGNOBJ *)(i + 56));
          v12 = *(_QWORD *)(i + 56);
          *(_DWORD *)(v12 + 28) = _InterlockedIncrement(*(volatile signed __int32 **)&REGION::ulUniqueREGION);
          v13 = *(_QWORD *)(i + 56);
          v22 = v23;
          EWNDOBJ::vSetClip(i, v13, &v22);
          RGNOBJAPI::bDeleteRGNOBJAPI((RGNOBJAPI *)v16);
          if ( (*((_DWORD *)v0 + 12) & 1) != 0 )
            TRACKOBJ::vUpdateDrvDelta(v0, (struct EWNDOBJ *)i, 1u);
          if ( (*((_DWORD *)v0 + 12) & 2) != 0 )
            (*((void (__fastcall **)(__int64))v0 + 5))(i);
          vSpWndobjChange(*(HDEV *)(*((_QWORD *)v0 + 4) + 48LL), (struct EWNDOBJ *)i);
          SEMOBJ::vUnlock((SEMOBJ *)&v21);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        }
        RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
        SEMOBJ::vUnlock((SEMOBJ *)&v19);
        GreClientRgnUpdated(1);
        return;
      }
    }
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
}
