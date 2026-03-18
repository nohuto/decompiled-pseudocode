/*
 * XREFs of ?CheckForSegmentedSignatureBlob@@YAJPEAXGPEAU_HIDP_VALUE_CAPS@@PEAG@Z @ 0x1C01C7F84
 * Callers:
 *     ValidateDeviceSignature @ 0x1C0118E30 (ValidateDeviceSignature.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CheckForSegmentedSignatureBlob(
        PHIDP_PREPARSED_DATA PreparsedData,
        USHORT a2,
        struct _HIDP_VALUE_CAPS *a3,
        unsigned __int16 *a4)
{
  int v6; // ebx
  int v7; // esi
  NTSTATUS result; // eax
  USHORT v9; // r9
  unsigned __int16 v10; // dx
  USHORT *p_ReportCount; // rcx
  USHORT v12; // r8
  USHORT v13; // [rsp+48h] [rbp+10h] BYREF

  v13 = a2;
  v6 = 0;
  v7 = 0;
  result = HidP_GetValueCaps(HidP_Feature, a3, &v13, PreparsedData);
  if ( result < 0 )
    return -1073741668;
  v9 = v13;
  v10 = 0;
  if ( !v13 )
    return -1073741668;
  p_ReportCount = &a3->ReportCount;
  do
  {
    v12 = p_ReportCount[18];
    if ( v12 == 198 && *(_DWORD *)(p_ReportCount - 1) == 65544 && *(p_ReportCount - 10) >= 0xFF00u )
      v6 = 1;
    if ( v12 == 199 && *p_ReportCount == 32 && *(p_ReportCount - 1) == 8 && *(p_ReportCount - 10) >= 0xFF00u )
    {
      v7 = 1;
      *a4 = v10;
    }
    ++v10;
    p_ReportCount += 36;
  }
  while ( v10 < v9 );
  if ( !v7 || !v6 )
    return -1073741668;
  return result;
}
