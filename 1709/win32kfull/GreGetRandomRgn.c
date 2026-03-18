/*
 * XREFs of GreGetRandomRgn @ 0x1C00808C0
 * Callers:
 *     _ExcludeUpdateRgn @ 0x1C0080120 (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C013D2A8 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C023BB1C (DrawTextExWorker.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001726C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C00182BC (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002B1A0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002C344 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  struct _POINTL v6; // r14
  unsigned int v7; // ebx
  int v8; // r15d
  __int64 v9; // rdi
  _QWORD v11[2]; // [rsp+28h] [rbp-49h] BYREF
  struct _POINTL v12; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v13[3]; // [rsp+40h] [rbp-31h] BYREF
  _BYTE v14[32]; // [rsp+58h] [rbp-19h] BYREF
  __int64 v15; // [rsp+78h] [rbp+7h]
  int v16; // [rsp+80h] [rbp+Fh]
  int v17; // [rsp+84h] [rbp+13h]
  __int64 v18; // [rsp+F0h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v6 = 0LL;
  v7 = -1;
  v8 = 5;
  if ( v11[0] )
  {
    v15 = 0LL;
    v16 = 0;
    v17 = 0;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v14, (struct XDCOBJ *)v11, 1);
    if ( (v14[24] & 1) == 0 )
    {
LABEL_7:
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
      goto LABEL_8;
    }
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
        v6 = *(struct _POINTL *)(v11[0] + 232LL);
        if ( v9 )
        {
          if ( v6 )
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
          v7 = 0;
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
        v18 = v9;
        if ( v8 == 5 )
        {
          if ( RGNOBJAPI::bCopy((RGNOBJAPI *)v13, (struct RGNOBJ *)&v18)
            && (a3 != 4
             || (*(_DWORD *)(v11[0] + 36LL) & 0x4000) == 0
             || (unsigned int)UserGetRedirectedWindowOrigin(a1, &v12) && RGNOBJ::bOffset((RGNOBJ *)v13, &v12)) )
          {
            v7 = 1;
          }
        }
        else
        {
          v12 = v6;
          if ( RGNOBJAPI::iCombine((RGNOBJAPI *)v13, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v12, v8) )
            v7 = 1;
        }
      }
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v13);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
  EngSetLastError(6u);
LABEL_8:
  if ( v11[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v7;
}
