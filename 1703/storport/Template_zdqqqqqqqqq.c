/*
 * XREFs of Template_zdqqqqqqqqq @ 0x1C00351FC
 * Callers:
 *     StorpAllocateHostMemoryBuffer @ 0x1C0033840 (StorpAllocateHostMemoryBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001EB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_zdqqqqqqqqq(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        char a5,
        int a6,
        char a7,
        char a8,
        __int64 a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14)
{
  __int64 v14; // rax
  unsigned int v15; // ecx
  int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-C0h] BYREF
  char *v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+58h] [rbp-A8h]
  int *v22; // [rsp+60h] [rbp-A0h]
  __int64 v23; // [rsp+68h] [rbp-98h]
  char *v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  char *v26; // [rsp+80h] [rbp-80h]
  __int64 v27; // [rsp+88h] [rbp-78h]
  int *v28; // [rsp+90h] [rbp-70h]
  __int64 v29; // [rsp+98h] [rbp-68h]
  char *v30; // [rsp+A0h] [rbp-60h]
  __int64 v31; // [rsp+A8h] [rbp-58h]
  char *v32; // [rsp+B0h] [rbp-50h]
  __int64 v33; // [rsp+B8h] [rbp-48h]
  char *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  char *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  char *v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]

  v18 = HmbMaximumSize;
  v17 = HmbAllocationPolicy;
  if ( a4 )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( a4[v14] );
    v15 = 2 * v14 + 2;
  }
  else
  {
    v15 = 10;
  }
  UserData.Size = v15;
  UserData.Reserved = 0;
  if ( !a4 )
    a4 = L"NULL";
  v21 = 4LL;
  UserData.Ptr = (unsigned __int64)a4;
  v20 = &a5;
  v23 = 4LL;
  v22 = &v17;
  v25 = 4LL;
  v24 = &a7;
  v27 = 4LL;
  v26 = &a8;
  v29 = 4LL;
  v28 = &v18;
  v30 = &a10;
  v32 = &a11;
  v34 = &a12;
  v36 = &a13;
  v38 = &a14;
  v31 = 4LL;
  v33 = 4LL;
  v35 = 4LL;
  v37 = 4LL;
  v39 = 4LL;
  return EtwWrite(Microsoft_Windows_StorPortHandle, &EventHmbAllocation, 0LL, 0xBu, &UserData);
}
