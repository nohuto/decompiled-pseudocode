/*
 * XREFs of CempHostInfoInitialize @ 0x1800063B8
 * Callers:
 *     CempGetProcessHostInfo @ 0x180006500 (CempGetProcessHostInfo.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180006740 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z @ 0x180042F74 (-HampUtilValidateAndCapturePsmInformation@@YAJPEAU_RM_PSM_HOST_INFO@@PEBGPEAEKKK_K@Z.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall CempHostInfoInitialize(__int64 a1, void *a2, int a3, int a4, __int64 a5, char *a6)
{
  __int64 v10; // rdi
  __int64 v11; // r11
  _WORD *v12; // r10
  __int16 v13; // ax
  _WORD *v14; // rax
  __int64 result; // rax

  memset_0(a6, 0, 0x228uLL);
  v10 = a1 - (_QWORD)a6;
  v11 = 232LL;
  v12 = a6;
  do
  {
    if ( v11 == -2147483414 )
      break;
    v13 = *(_WORD *)((char *)v12 + v10);
    if ( !v13 )
      break;
    *v12++ = v13;
    --v11;
  }
  while ( v11 );
  v14 = v12 - 1;
  if ( v11 )
    v14 = v12;
  *v14 = 0;
  RtlCopySid(0x44u, a6 + 464, a2);
  result = a5;
  *((_DWORD *)a6 + 133) = a3;
  *((_DWORD *)a6 + 134) = a4;
  *((_QWORD *)a6 + 68) = a5;
  return result;
}
