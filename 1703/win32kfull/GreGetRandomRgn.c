/*
 * XREFs of GreGetRandomRgn @ 0x1C00F84A0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C00F82DC (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0136C58 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C023A250 (DrawTextExWorker.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0022460 (UserGetRedirectedWindowOrigin.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0074430 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00750D4 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C007E0BC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C007F920 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v6; // ebx
  struct _POINTL v7; // r14
  int v8; // r15d
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+28h] [rbp-49h] BYREF
  struct _POINTL v12; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v14[32]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  __int64 v17; // [rsp+F0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v6 = -1;
  v7 = 0LL;
  v8 = 5;
  if ( !v11[0] )
  {
    EngSetLastError(6u);
    goto LABEL_8;
  }
  v15 = 0LL;
  v16 = 0LL;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v11, 1);
  if ( (v14[24] & 1) != 0 )
  {
    switch ( a3 )
    {
      case 1:
        v9 = *(_QWORD *)(v11[0] + 224LL);
        break;
      case 2:
        v9 = *(_QWORD *)(v11[0] + 232LL);
        break;
      case 3:
        v9 = *(_QWORD *)(v11[0] + 224LL);
        v7 = *(struct _POINTL *)(v11[0] + 232LL);
        if ( v9 )
        {
          if ( v7 )
            v8 = 1;
        }
        else
        {
          v9 = *(_QWORD *)(v11[0] + 232LL);
        }
        break;
      default:
        if ( (unsigned int)(a3 - 4) > 1 )
        {
LABEL_6:
          v6 = 0;
          goto LABEL_7;
        }
        v9 = *(_QWORD *)(v11[0] + 1536LL);
        break;
    }
    if ( v9 )
    {
      RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v13, a2, 0);
      if ( v13[0] )
      {
        v17 = v9;
        if ( v8 == 5 )
        {
          if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v13, (struct RGNOBJ *)&v17)
            && (a3 != 4
             || (*(_DWORD *)(v11[0] + 36LL) & 0x4000) == 0
             || (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v12)
             && RGNOBJ::bOffset((RGNOBJ *)v13, &v12)) )
          {
            v6 = 1;
          }
        }
        else
        {
          v12 = v7;
          if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v13, (struct RGNOBJ *)&v17, (struct RGNOBJ *)&v12, v8) )
            v6 = 1;
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_7:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
LABEL_8:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v6;
}
