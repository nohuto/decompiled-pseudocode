/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C0022270
 * Callers:
 *     <none>
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0022460 (UserGetRedirectedWindowOrigin.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00751D0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C0075330 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  __int64 v5; // r15
  unsigned int v6; // r14d
  int v7; // esi
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v11; // [rsp+20h] [rbp-69h] BYREF
  int v12; // [rsp+28h] [rbp-61h]
  int v13; // [rsp+2Ch] [rbp-5Dh]
  _QWORD v14[2]; // [rsp+30h] [rbp-59h] BYREF
  int v15; // [rsp+40h] [rbp-49h]
  struct _POINTL v16; // [rsp+48h] [rbp-41h] BYREF
  __int64 v17; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v18[32]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v19; // [rsp+80h] [rbp-9h]
  int v20; // [rsp+88h] [rbp-1h]
  int v21; // [rsp+8Ch] [rbp+3h]
  __int64 v23; // [rsp+108h] [rbp+7Fh] BYREF

  if ( a3 == 4 )
    UserEnterUserCritSecShared();
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v11, a1);
  v5 = 0LL;
  v6 = -1;
  v7 = -1;
  v8 = 5;
  if ( !v11 )
  {
    EngSetLastError(6u);
    goto LABEL_18;
  }
  v19 = 0LL;
  v20 = 0;
  v21 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v18, (struct XDCOBJ *)&v11, 1);
  if ( (v18[24] & 1) == 0 )
  {
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v11);
    goto LABEL_21;
  }
  switch ( a3 )
  {
    case 1:
      v9 = *(_QWORD *)(v11 + 224);
      break;
    case 2:
      v9 = *(_QWORD *)(v11 + 232);
      break;
    case 3:
      v9 = *(_QWORD *)(v11 + 224);
      v5 = *(_QWORD *)(v11 + 232);
      if ( v9 )
      {
        if ( v5 )
          v8 = 1;
      }
      else
      {
        v9 = *(_QWORD *)(v11 + 232);
      }
      break;
    default:
      if ( (unsigned int)(a3 - 4) > 1 )
        goto LABEL_24;
      v9 = *(_QWORD *)(v11 + 1536);
      break;
  }
  if ( v9 )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v14, a2, 0);
    if ( v14[0] )
    {
      v23 = v9;
      if ( v8 == 5 )
      {
        if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v14, (struct RGNOBJ *)&v23)
          && (a3 != 4
           || (*(_DWORD *)(v11 + 36) & 0x4000) == 0
           || (unsigned int)UserGetRedirectedWindowOrigin(a1, &v16) && RGNOBJ::bOffset((RGNOBJ *)v14, &v16)) )
        {
          v7 = 1;
        }
      }
      else
      {
        v17 = v5;
        if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v14, (struct RGNOBJ *)&v23, (struct RGNOBJ *)&v17, v8) )
          v7 = 1;
      }
    }
    if ( !v15 )
      RGNOBJ::UpdateUserRgn((RGNOBJ *)v14);
    if ( v14[0] )
      _InterlockedAdd((volatile signed __int32 *)(v14[0] + 12LL), 0xFFFFFFFF);
    goto LABEL_17;
  }
LABEL_24:
  v7 = 0;
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v18);
LABEL_18:
  if ( v11 )
  {
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v11);
    _InterlockedAdd((volatile signed __int32 *)(v11 + 12), 0xFFFFFFFF);
  }
  v6 = v7;
LABEL_21:
  if ( a3 == 4 )
    UserLeaveUserCritSec();
  return v6;
}
