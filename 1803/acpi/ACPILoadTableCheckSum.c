/*
 * XREFs of ACPILoadTableCheckSum @ 0x1C009AD54
 * Callers:
 *     ACPIInitializeDDB @ 0x1C009A3CC (ACPIInitializeDDB.c)
 * Callees:
 *     ACPIAssert @ 0x1C00091B4 (ACPIAssert.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001FFE0 (WPP_RECORDER_SF_qd.c)
 */

char __fastcall ACPILoadTableCheckSum(_BYTE *a1, unsigned int a2)
{
  unsigned int v2; // esi
  char v3; // bp
  char v4; // bl
  _BYTE *v5; // rdi
  char v6; // r14
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rax
  int v10; // edx

  v2 = a2;
  v3 = (char)a1;
  v4 = 0;
  v5 = a1;
  v6 = a2 + (_BYTE)a1 - 1;
  LOBYTE(a2) = 4;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    a2,
    6,
    27,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    (char)a1,
    v6);
  if ( v2 )
  {
    v9 = v2;
    do
    {
      v4 += *v5++;
      --v9;
    }
    while ( v9 );
  }
  ACPIAssert(v4 == 0, 8194, v7, v8);
  if ( !v4 )
    return 1;
  LOBYTE(v10) = 2;
  WPP_RECORDER_SF_qd(
    WPP_GLOBAL_Control->DeviceExtension,
    v10,
    6,
    28,
    (__int64)&WPP_ed917bd00cfd3c06aafe64848ab367c8_Traceguids,
    v3,
    v6);
  return 0;
}
