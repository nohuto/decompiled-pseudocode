/*
 * XREFs of NVMeLogTelemetry @ 0x1C000DABC
 * Callers:
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0011F28 (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013F20 (__security_check_cookie.c)
 *     memmove @ 0x1C0014040 (memmove.c)
 *     memset @ 0x1C0014380 (memset.c)
 */

__int64 __fastcall NVMeLogTelemetry(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        int a11,
        __int64 a12,
        int a13,
        __int64 a14,
        int a15,
        __int64 a16,
        int a17,
        __int64 a18,
        int a19,
        __int64 a20,
        int a21,
        __int64 a22,
        int a23,
        __int64 a24)
{
  unsigned int v26; // ecx
  const char *v27; // rax
  unsigned int v28; // ebx
  size_t v29; // r8
  const char *v30; // rax
  unsigned int i; // ecx
  size_t v32; // r8
  unsigned int v33; // ecx
  const char *v34; // rax
  size_t v35; // r8
  unsigned int v36; // ecx
  const char *v37; // rax
  size_t v38; // r8
  unsigned int v39; // ecx
  const char *v40; // rax
  size_t v41; // r8
  unsigned int v42; // ecx
  const char *v43; // rax
  size_t v44; // r8
  unsigned int v45; // ecx
  const char *v46; // rax
  size_t v47; // r8
  unsigned int v48; // ecx
  const char *v49; // rax
  size_t v50; // r8
  const char *v51; // rcx
  unsigned int j; // eax
  _QWORD v54[48]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v54, 0, sizeof(v54));
  v26 = 0;
  v54[0] = 0x100000001LL;
  v27 = "WaitForCmdComplete";
  v28 = 32;
  do
  {
    if ( !*v27 )
      break;
    ++v26;
    ++v27;
  }
  while ( v26 < 0x20 );
  v29 = 32LL;
  if ( v26 < 0x20 )
    v29 = v26;
  memmove(&v54[1], "WaitForCmdComplete", v29);
  v30 = "TimeoutInMS";
  v54[5] = 1LL;
  for ( i = 0; i < 0x20; ++i )
  {
    if ( !*v30 )
      break;
    ++v30;
  }
  v32 = 32LL;
  if ( i < 0x20 )
    v32 = i;
  memmove(&v54[8], "TimeoutInMS", v32);
  v54[12] = a10;
  v33 = 0;
  v34 = "TotalWaitTimeInMS";
  do
  {
    if ( !*v34 )
      break;
    ++v33;
    ++v34;
  }
  while ( v33 < 0x20 );
  v35 = 32LL;
  if ( v33 < 0x20 )
    v35 = v33;
  memmove(&v54[13], "TotalWaitTimeInMS", v35);
  v54[17] = a12;
  v36 = 0;
  v37 = "SrbStatus";
  do
  {
    if ( !*v37 )
      break;
    ++v36;
    ++v37;
  }
  while ( v36 < 0x20 );
  v38 = 32LL;
  if ( v36 < 0x20 )
    v38 = v36;
  memmove(&v54[18], "SrbStatus", v38);
  v54[22] = a14;
  v39 = 0;
  v40 = "IsAdminCmd";
  do
  {
    if ( !*v40 )
      break;
    ++v39;
    ++v40;
  }
  while ( v39 < 0x20 );
  v41 = 32LL;
  if ( v39 < 0x20 )
    v41 = v39;
  memmove(&v54[23], "IsAdminCmd", v41);
  v54[27] = a16;
  v42 = 0;
  v43 = "CmdOpCode";
  do
  {
    if ( !*v43 )
      break;
    ++v42;
    ++v43;
  }
  while ( v42 < 0x20 );
  v44 = 32LL;
  if ( v42 < 0x20 )
    v44 = v42;
  memmove(&v54[28], "CmdOpCode", v44);
  v54[32] = a18;
  v45 = 0;
  v46 = "CmdExtra";
  do
  {
    if ( !*v46 )
      break;
    ++v45;
    ++v46;
  }
  while ( v45 < 0x20 );
  v47 = 32LL;
  if ( v45 < 0x20 )
    v47 = v45;
  memmove(&v54[33], "CmdExtra", v47);
  v54[37] = a20;
  v48 = 0;
  v49 = "StatusCodeType";
  do
  {
    if ( !*v49 )
      break;
    ++v48;
    ++v49;
  }
  while ( v48 < 0x20 );
  v50 = 32LL;
  if ( v48 < 0x20 )
    v50 = v48;
  memmove(&v54[38], "StatusCodeType", v50);
  v54[42] = a22;
  v51 = "StatusCode";
  for ( j = 0; j < 0x20; ++j )
  {
    if ( !*v51 )
      break;
    ++v51;
  }
  if ( j < 0x20 )
    v28 = j;
  memmove(&v54[43], "StatusCode", v28);
  v54[47] = a24;
  return StorPortExtendedFunction(79LL, a1, a2, v54);
}
