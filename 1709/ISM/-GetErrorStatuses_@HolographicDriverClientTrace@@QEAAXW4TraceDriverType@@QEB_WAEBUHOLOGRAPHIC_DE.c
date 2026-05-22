/*
 * XREFs of ?GetErrorStatuses_@HolographicDriverClientTrace@@QEAAXW4TraceDriverType@@QEB_WAEBUHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@@Z @ 0x1800B1FA8
 * Callers:
 *     ?GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU?$VariableSizeStructWrapper@UHOLOGRAPHIC_DEVICE_ERROR_STATUSES@@UHOLOGRAPHIC_DEVICE_ERROR_STATUS@@@234@@Z @ 0x1800B63D0 (-GetErrorStatuses@SpatialGraphDriverClient@Holographic@Internal@Windows@@UEAAJPEAU-$VariableSize.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

int __fastcall HolographicDriverClientTrace::GetErrorStatuses_(__int64 a1, int a2, const wchar_t *a3, _DWORD *a4)
{
  struct HolographicDriverClientTrace *v4; // rax
  const struct _TlgProvider_t *v8; // r10
  const char *v9; // rax
  __int64 v10; // rcx
  const wchar_t *v11; // rcx
  int v12; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-19h] BYREF
  const char *v15; // [rsp+58h] [rbp+7h]
  int v16; // [rsp+60h] [rbp+Fh]
  int v17; // [rsp+64h] [rbp+13h]
  const wchar_t *v18; // [rsp+68h] [rbp+17h]
  int v19; // [rsp+70h] [rbp+1Fh]
  int v20; // [rsp+74h] [rbp+23h]
  _DWORD *v21; // [rsp+78h] [rbp+27h]
  __int64 v22; // [rsp+80h] [rbp+2Fh]
  _DWORD *v23; // [rsp+88h] [rbp+37h]
  int v24; // [rsp+90h] [rbp+3Fh]
  int v25; // [rsp+94h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+B0h] [rbp+5Fh] BYREF

  v4 = (struct HolographicDriverClientTrace *)&retaddr;
  if ( *a4 < 0xFFFFu )
  {
    v4 = HolographicDriverClientTrace::Instance();
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)v4 + 1);
    if ( *(_DWORD *)v8 > 4u && (*((_QWORD *)v8 + 2) & 0x400000000000LL) != 0 )
    {
      v4 = (struct HolographicDriverClientTrace *)(*((_QWORD *)v8 + 3) & 0x400000000000LL);
      if ( v4 == *((struct HolographicDriverClientTrace **)v8 + 3) )
      {
        if ( a2 )
        {
          if ( a2 == 1 )
            v9 = "SpatialGraph";
          else
            v9 = "(unknown)";
        }
        else
        {
          v9 = "Display";
        }
        v10 = -1LL;
        do
          ++v10;
        while ( v9[v10] );
        v15 = v9;
        v16 = v10 + 1;
        LODWORD(v9) = 0;
        v17 = 0;
        v11 = &word_1800DF514;
        if ( a3 )
        {
          v11 = a3;
          v9 = (const char *)-1LL;
          do
            ++v9;
          while ( a3[(_QWORD)v9] );
        }
        v18 = v11;
        v19 = 2 * (_DWORD)v9 + 2;
        v23 = a4 + 1;
        v12 = 16 * *a4 + 4;
        v20 = 0;
        v24 = v12;
        v21 = a4;
        v22 = 2LL;
        v25 = 0;
        LODWORD(v4) = TlgWrite(v8, &unk_1800F1308, 0LL, 0LL, 6u, &pData);
      }
    }
  }
  return (int)v4;
}
