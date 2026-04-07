/*
 * XREFs of Template_z @ 0x18007F804
 * Callers:
 *     ?SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z @ 0x180039FF4 (-SnapshotIfStatic@CSecondaryWindowRepresentation@@QEAAXPEAVCResource@@0PEBUMilPointAndSizeL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_z(__int64 a1, __int64 a2, const wchar_t *a3)
{
  __int64 v3; // rax
  int v4; // ecx
  const wchar_t *v6; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+28h] [rbp-20h]
  int v8; // [rsp+2Ch] [rbp-1Ch]

  if ( a3 )
  {
    v3 = -1LL;
    do
      ++v3;
    while ( a3[v3] );
    v4 = 2 * v3 + 2;
  }
  else
  {
    v4 = 10;
  }
  v7 = v4;
  if ( !a3 )
    a3 = L"NULL";
  v8 = 0;
  v6 = a3;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, &UdwmSecondaryWindowBrushSnapshot_Info, 1LL, &v6);
}
