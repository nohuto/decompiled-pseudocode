/*
 * XREFs of ?IoctlRanLong_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@KJMK@Z @ 0x1800B11C4
 * Callers:
 *     ?DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKPEAXKPEAK@Z @ 0x1800B3958 (-DeviceIoControlHelper@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@QEAAJKPEBXKP.c)
 * Callees:
 *     _TlgWrite @ 0x180001118 (_TlgWrite.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x1800AF5D4 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 */

void __fastcall HolographicDriverClientTrace::IoctlRanLong_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        int a3,
        int a4,
        float a5,
        char a6)
{
  const struct _TlgProvider_t *v8; // rcx
  int v9; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-39h] BYREF
  const struct _GUID *v11; // [rsp+68h] [rbp-19h]
  __int64 v12; // [rsp+70h] [rbp-11h]
  int *v13; // [rsp+78h] [rbp-9h]
  __int64 v14; // [rsp+80h] [rbp-1h]
  int *v15; // [rsp+88h] [rbp+7h]
  __int64 v16; // [rsp+90h] [rbp+Fh]
  float *v17; // [rsp+98h] [rbp+17h]
  __int64 v18; // [rsp+A0h] [rbp+1Fh]
  char *v19; // [rsp+A8h] [rbp+27h]
  __int64 v20; // [rsp+B0h] [rbp+2Fh]
  int v21; // [rsp+F0h] [rbp+6Fh] BYREF

  v21 = a4;
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
  if ( *(_DWORD *)v8 > 3u
    && (*((_QWORD *)v8 + 2) & 0x200000000000LL) != 0
    && (*((_QWORD *)v8 + 3) & 0x200000000000LL) == *((_QWORD *)v8 + 3) )
  {
    v11 = a2;
    v13 = &v9;
    v15 = &v21;
    v17 = &a5;
    v19 = &a6;
    v12 = 16LL;
    v9 = a3;
    v14 = 4LL;
    v16 = 4LL;
    v18 = 4LL;
    v20 = 4LL;
    TlgWrite(v8, &unk_1800F1721, 0LL, 0LL, 7u, &pData);
  }
}
