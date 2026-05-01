/*
 * XREFs of ?RmpLogTerminationForWerCallback@@YAJPEAU_RM_ACTIVITY_HOST@@PEAXK1@Z @ 0x18003B510
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpLogTerminationForWerCallback(struct _RM_ACTIVITY_HOST *a1, void *a2, unsigned int a3, void *a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  const GUID *v8; // r9
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  int v12; // [rsp+38h] [rbp-19h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-15h] BYREF
  __int64 v14; // [rsp+40h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  int *v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  __int64 *v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  int *v22; // [rsp+88h] [rbp+37h]
  int v23; // [rsp+90h] [rbp+3Fh]
  int v24; // [rsp+94h] [rbp+43h]

  if ( ((*((_DWORD *)a1 + 173) >> 2) & 7) == 1 )
    v6 = 0;
  else
    v6 = 4;
  v7 = WerpAddTerminationReason(a3, v6, L"HAM", 0LL);
  LODWORD(v8) = 0;
  if ( v7 < 0 )
    LODWORD(v8) = WerpAddTerminationReason(a3, v6, L"HAM", 0LL) | 0xC0000000;
  v12 = (int)v8;
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 1uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v16 = &v12;
    v14 = *((_QWORD *)a1 + 3);
    v19 = &v14;
    v22 = (int *)&v13;
    v17 = 4;
    v20 = 8;
    v13 = a3;
    v23 = 4;
    TlgWrite(v9, &unk_180058852, v10, v8, 5u, &pData);
    LODWORD(v8) = v12;
  }
  return (unsigned int)v8;
}
