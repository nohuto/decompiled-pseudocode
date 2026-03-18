/*
 * XREFs of ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1C000B83C
 * Callers:
 *     SetIconMetrics @ 0x1C000B568 (SetIconMetrics.c)
 * Callees:
 *     InvalidateKMDpiMetricsCacheDPIMETRICS @ 0x1C000B8E0 (InvalidateKMDpiMetricsCacheDPIMETRICS.c)
 *     UserSetFont @ 0x1C000C590 (UserSetFont.c)
 *     UserSetAltScaleFont @ 0x1C000C71C (UserSetAltScaleFont.c)
 *     GreMarkDeletableFont @ 0x1C000C828 (GreMarkDeletableFont.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 */

__int64 __fastcall SetIconFonts(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2, __int64 a3, __int64 a4)
{
  __int128 *v5; // rdi
  struct HLFONT__ **v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // [rsp+20h] [rbp-78h] BYREF
  __int128 v16; // [rsp+30h] [rbp-68h]
  __int128 v17; // [rsp+40h] [rbp-58h]
  __int128 v18; // [rsp+50h] [rbp-48h]
  __int128 v19; // [rsp+60h] [rbp-38h]
  __int64 v20; // [rsp+70h] [rbp-28h]
  int v21; // [rsp+78h] [rbp-20h]

  if ( a2 )
  {
    v10 = *((_OWORD *)a2 + 1);
    v5 = &v15;
    v11 = *((_OWORD *)a2 + 2);
    v21 = *((_DWORD *)a2 + 26);
    v15 = v10;
    v12 = *((_OWORD *)a2 + 3);
    v16 = v11;
    v13 = *((_OWORD *)a2 + 4);
    v17 = v12;
    v14 = *((_OWORD *)a2 + 5);
    v18 = v13;
    *(_QWORD *)&v13 = *((_QWORD *)a2 + 12);
    v19 = v14;
    v20 = v13;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = (struct HLFONT__ **)(GetSessionSystemDpiMetrics(
                              a1,
                              a2,
                              a3,
                              a4,
                              v15,
                              *((_QWORD *)&v15 + 1),
                              v16,
                              *((_QWORD *)&v16 + 1),
                              v17,
                              *((_QWORD *)&v17 + 1),
                              v18,
                              *((_QWORD *)&v18 + 1))
                          + 64);
  v7 = UserSetFont(a1, v5, 154LL, v6);
  if ( v7 )
  {
    v8 = Get96DpiMetrics();
    v7 = UserSetAltScaleFont(*v6, v8 + 64);
    if ( !v7 )
    {
      GreMarkDeletableFont(*v6);
      GreDeleteObject(*v6);
      *v6 = 0LL;
    }
  }
  InvalidateKMDpiMetricsCacheDPIMETRICS();
  return v7;
}
