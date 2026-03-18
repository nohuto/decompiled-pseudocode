/*
 * XREFs of NtGdiGetRandomRgn @ 0x1C0092950
 * Callers:
 *     <none>
 * Callees:
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0017300 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bSaveAttributes@XDCOBJ@@AEAAHXZ @ 0x1C002C270 (-bSaveAttributes@XDCOBJ@@AEAAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C002C390 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C024BFCC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiGetRandomRgn(__int64 a1, HRGN a2, int a3)
{
  unsigned int v5; // r14d
  __int64 v6; // r15
  int v7; // esi
  int v8; // r12d
  __int64 v9; // rbx
  __int64 v10; // rbx
  DC *v12; // [rsp+20h] [rbp-69h] BYREF
  int v13; // [rsp+28h] [rbp-61h]
  unsigned int v14; // [rsp+2Ch] [rbp-5Dh]
  _QWORD v15[2]; // [rsp+30h] [rbp-59h] BYREF
  int v16; // [rsp+40h] [rbp-49h]
  struct _POINTL v17; // [rsp+48h] [rbp-41h] BYREF
  __int64 v18; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v19[32]; // [rsp+60h] [rbp-29h] BYREF
  __int64 v20; // [rsp+80h] [rbp-9h]
  int v21; // [rsp+88h] [rbp-1h]
  int v22; // [rsp+8Ch] [rbp+3h]
  HRGN v23; // [rsp+F8h] [rbp+6Fh]
  int v24; // [rsp+100h] [rbp+77h] BYREF
  __int64 v25; // [rsp+108h] [rbp+7Fh] BYREF

  v23 = a2;
  if ( a3 == 5 )
    return 0LL;
  if ( a3 == 4 )
    UserEnterUserCritSecShared();
  v13 = 0;
  v14 = 0;
  LOBYTE(a2) = 1;
  v5 = -1;
  v12 = (DC *)HmgLockEx(a1, a2, 0LL);
  if ( v12 )
  {
    if ( (unsigned int)XDCOBJ::bSaveAttributes((XDCOBJ *)&v12) )
    {
      if ( (*((_DWORD *)v12 + 134) & 4) != 0 )
        DC::vMarkTransformDirty(v12);
    }
    else
    {
      _InterlockedAdd((volatile signed __int32 *)v12 + 3, 0xFFFFFFFF);
      v12 = 0LL;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
  v6 = 0LL;
  v7 = -1;
  v8 = 5;
  if ( !v12 )
  {
    EngSetLastError(6u);
LABEL_23:
    if ( v12 )
    {
      XDCOBJ::RestoreAttributes((XDCOBJ *)&v12);
      v24 = 0;
      v10 = *(_QWORD *)v12;
      HmgDecrementExclusiveReferenceCountEx(v12, v14, &v24);
      if ( v24 )
        bDeleteDCInternalEx(v10, 0LL);
    }
    v5 = v7;
    goto LABEL_27;
  }
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v19, (struct XDCOBJ *)&v12, 1);
  if ( (v19[24] & 1) != 0 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = *((_QWORD *)v12 + 28);
        break;
      case 2:
        v9 = *((_QWORD *)v12 + 29);
        break;
      case 3:
        v9 = *((_QWORD *)v12 + 28);
        v6 = *((_QWORD *)v12 + 29);
        if ( v9 )
        {
          if ( v6 )
            v8 = 1;
        }
        else
        {
          v9 = *((_QWORD *)v12 + 29);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
          goto LABEL_30;
        v9 = *((_QWORD *)v12 + 192);
        break;
    }
    if ( v9 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v15, v23, 0);
      if ( v15[0] )
      {
        v25 = v9;
        if ( v8 == 5 )
        {
          if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v15, (struct RGNOBJ *)&v25)
            && (a3 != 4
             || (*((_DWORD *)v12 + 9) & 0x4000) == 0
             || (unsigned int)UserGetRedirectedWindowOrigin(a1, &v17) && RGNOBJ::bOffset((RGNOBJ *)v15, &v17)) )
          {
            v7 = 1;
          }
        }
        else
        {
          v18 = v6;
          if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v15, (struct RGNOBJ *)&v25, (struct RGNOBJ *)&v18, v8) )
            v7 = 1;
        }
      }
      if ( !v16 )
        RGNOBJ::UpdateUserRgn((RGNOBJ *)v15);
      if ( v15[0] )
        _InterlockedAdd((volatile signed __int32 *)(v15[0] + 12LL), 0xFFFFFFFF);
      goto LABEL_22;
    }
LABEL_30:
    v7 = 0;
LABEL_22:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
    goto LABEL_23;
  }
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
  DCOBJ::~DCOBJ((DCOBJ *)&v12);
LABEL_27:
  if ( a3 == 4 )
    UserLeaveUserCritSec();
  return v5;
}
