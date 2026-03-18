/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00DDA7C
 * Callers:
 *     xxxClientExpandStringW @ 0x1C00DCBFC (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00DD054 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1C00DD2A0 (SfnOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C00DDC8C (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01FB680 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FBBD0 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     MBToWCSEx @ 0x1C000C334 (MBToWCSEx.c)
 *     wcsncpycch @ 0x1C00DDB98 (wcsncpycch.c)
 *     WCSToMBEx @ 0x1C00DE10C (WCSToMBEx.c)
 *     strncpycch @ 0x1C023B1D8 (strncpycch.c)
 */

void __fastcall CopyOutputString(struct _CALLBACKSTATUS *a1, PWCH *a2, unsigned int a3, int a4)
{
  unsigned int v6; // ecx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // r8d

  v6 = *((_DWORD *)a1 + 2);
  if ( v6 )
    ProbeForRead(*((volatile void **)a1 + 2), v6, 2 - (a4 != 0));
  else
    *(_BYTE *)MmUserProbeAddress = 0;
  if ( *((int *)a2 + 1) >= 0 )
  {
    if ( a4 )
    {
      v15 = *((_DWORD *)a1 + 2);
      if ( *(_DWORD *)a1 < v15 )
        v15 = *(_DWORD *)a1;
      v10 = MBToWCSEx(v6, *((const CHAR **)a1 + 2), v15, a2 + 1, a3);
      if ( v10 >= a3 )
        goto LABEL_9;
      a2[1][v10] = 0;
    }
    else
    {
      if ( a3 >= *((_DWORD *)a1 + 2) >> 1 )
        v9 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
      else
        LODWORD(v9) = a3;
      v10 = wcsncpycch(a2[1], *((_QWORD *)a1 + 2), (unsigned int)v9);
    }
    a3 = v10;
LABEL_9:
    *(_DWORD *)a2 = 2 * a3;
    return;
  }
  v11 = *((unsigned int *)a1 + 2);
  v12 = *((_QWORD *)a1 + 2);
  if ( a4 )
  {
    if ( a3 < (unsigned int)v11 )
      v11 = a3;
    v14 = strncpycch(a2[1], v12, v11);
  }
  else
  {
    v13 = (unsigned int)v11 >> 1;
    if ( *(_DWORD *)a1 < (unsigned int)v13 )
      v13 = *(unsigned int *)a1;
    v14 = WCSToMBEx(0LL, v12, v13, a2 + 1, a3);
    if ( v14 >= a3 )
      goto LABEL_17;
    *((_BYTE *)a2[1] + v14) = 0;
  }
  a3 = v14;
LABEL_17:
  *(_DWORD *)a2 = a3;
}
