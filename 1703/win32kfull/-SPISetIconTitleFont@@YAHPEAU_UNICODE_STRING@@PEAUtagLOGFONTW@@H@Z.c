/*
 * XREFs of ?SPISetIconTitleFont@@YAHPEAU_UNICODE_STRING@@PEAUtagLOGFONTW@@H@Z @ 0x1C01B4848
 * Callers:
 *     ?xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z @ 0x1C0009E34 (-xxxSetSPIMetrics@@YAHPEAU_UNICODE_STRING@@KPEAXH@Z.c)
 * Callees:
 *     CreateFontFromWinIni @ 0x1C000C5F8 (CreateFontFromWinIni.c)
 *     UserSetAltScaleFont @ 0x1C000C71C (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C000C828 (GreMarkDeletableFont.c)
 *     GreExtGetObjectW @ 0x1C00462D8 (GreExtGetObjectW.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SPISetIconTitleFont(struct _UNICODE_STRING *a1, struct tagLOGFONTW *a2, int a3)
{
  BOOL v6; // esi
  unsigned int v7; // edi
  __int64 FontFromWinIni; // rax
  struct HLFONT__ *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 SessionSystemDpiMetrics; // rbp
  __int64 v16; // rax
  struct HLFONT__ *v17; // rcx
  __int64 v18; // rsi
  struct HLFONT__ *v19; // rcx
  struct HLFONT__ *v20; // rax
  __int64 v21; // [rsp+20h] [rbp-B8h]
  struct HLFONT__ *v22; // [rsp+30h] [rbp-A8h] BYREF
  unsigned __int16 v23[48]; // [rsp+40h] [rbp-98h] BYREF

  v6 = a3 == 0;
  v7 = 0;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 0 )
  {
    a2->lfHeight = EngMulDiv(a2->lfHeight, *(unsigned __int16 *)(gpsi + 8678LL), 96);
    a2->lfWidth = EngMulDiv(a2->lfWidth, *(unsigned __int16 *)(gpsi + 8678LL), 96);
  }
  FontFromWinIni = CreateFontFromWinIni((__int64)a1, a2, 0x9Au);
  v9 = (struct HLFONT__ *)FontFromWinIni;
  if ( FontFromWinIni )
  {
    if ( !(unsigned int)UserSetAltScaleFont(FontFromWinIni, (__int64 *)&v22) )
    {
      GreMarkDeletableFont(v9);
      GreDeleteObject(v9);
      return 0LL;
    }
    if ( a3 )
    {
      if ( a2 )
      {
        GreExtGetObjectW((HBRUSH)v9, 92LL, v23);
        v7 = FastWriteProfileValue(a1, 23LL, 154LL, 3LL, v23, 92);
      }
      else
      {
        v7 = 1;
      }
      v6 = v7;
    }
    if ( v6 )
    {
      SessionSystemDpiMetrics = GetSessionSystemDpiMetrics(v11, v10, v12, v13, v21);
      v16 = Get96DpiMetrics();
      v17 = *(struct HLFONT__ **)(SessionSystemDpiMetrics + 64);
      v18 = v16;
      if ( v17 )
      {
        GreMarkDeletableFont(v17);
        GreDeleteObject(*(_QWORD *)(SessionSystemDpiMetrics + 64));
      }
      v19 = *(struct HLFONT__ **)(v18 + 64);
      if ( v19 )
      {
        GreMarkDeletableFont(v19);
        GreDeleteObject(*(_QWORD *)(v18 + 64));
      }
      v20 = v22;
      *(_QWORD *)(SessionSystemDpiMetrics + 64) = v9;
      *(_QWORD *)(v18 + 64) = v20;
    }
    else
    {
      GreMarkDeletableFont(v9);
      GreDeleteObject(v9);
      GreMarkDeletableFont(v22);
      GreDeleteObject(v22);
    }
  }
  return v7;
}
