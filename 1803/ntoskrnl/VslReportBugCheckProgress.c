/*
 * XREFs of VslReportBugCheckProgress @ 0x140230280
 * Callers:
 *     PopCheckpointSystemSleepUnsafe @ 0x1404874A4 (PopCheckpointSystemSleepUnsafe.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140084A44 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     memset @ 0x1401BCC40 (memset.c)
 */

NTSTATUS __fastcall VslReportBugCheckProgress(char *a1, __int128 *a2, const void *a3, unsigned int a4, int a5)
{
  size_t v6; // rbx
  NTSTATUS result; // eax
  unsigned int v10; // edi
  wchar_t **v11; // rcx
  unsigned __int16 *v12; // rax
  int v13; // r8d
  int v14; // edx
  __int128 v15; // xmm0
  __int128 v16; // xmm0
  _OWORD v17[7]; // [rsp+20h] [rbp-51h] BYREF

  v6 = a4;
  if ( (a5 & 1) == 0 || a4 > 8 )
    return -1073741811;
  memset(v17, 0, 0x68uLL);
  v10 = 0;
  v11 = IumBugCheckVariables;
  while ( 1 )
  {
    v12 = (unsigned __int16 *)a1;
    do
    {
      v13 = *(unsigned __int16 *)((char *)v12 + (char *)*v11 - a1);
      v14 = *v12 - v13;
      if ( v14 )
        break;
      ++v12;
    }
    while ( v13 );
    if ( !v14 )
      break;
    ++v10;
    ++v11;
    if ( v10 >= 4 )
      goto LABEL_12;
  }
  *((_QWORD *)&v17[0] + 1) = v10;
LABEL_12:
  if ( v10 == 4 )
    return -1073741811;
  v15 = *a2;
  memset(&v17[2], 0, 24);
  v17[1] = v15;
  if ( (a5 & 0x40) != 0 )
    result = -1073741811;
  else
    result = VslpEnterIumSecureMode(2u, 241LL, 0, (__int64)v17);
  if ( (_DWORD)v6 )
  {
    memmove(&v17[2], a3, v6);
    v16 = *a2;
    *((_QWORD *)&v17[0] + 1) = v10;
    *(_QWORD *)&v17[3] = a5 | 6u;
    v17[1] = v16;
    *((_QWORD *)&v17[2] + 1) = v6;
    return VslpEnterIumSecureMode(2u, 241LL, 0, (__int64)v17);
  }
  return result;
}
