/*
 * XREFs of ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x1C00C4FC8
 * Callers:
 *     xxxClientExpandStringW @ 0x1C00C3C98 (xxxClientExpandStringW.c)
 *     xxxClientLoadStringW @ 0x1C00C4758 (xxxClientLoadStringW.c)
 *     SfnOUTSTRING @ 0x1C00C4980 (SfnOUTSTRING.c)
 *     ClientGetListboxString @ 0x1C00C51DC (ClientGetListboxString.c)
 *     SfnINCNTOUTSTRING @ 0x1C01F9C30 (SfnINCNTOUTSTRING.c)
 *     SfnINCNTOUTSTRINGNULL @ 0x1C01FA170 (SfnINCNTOUTSTRINGNULL.c)
 * Callees:
 *     MBToWCSEx @ 0x1C0007014 (MBToWCSEx.c)
 *     wcsncpycch @ 0x1C00C50EC (wcsncpycch.c)
 *     WCSToMBEx @ 0x1C00C5DAC (WCSToMBEx.c)
 *     strncpycch @ 0x1C02393B8 (strncpycch.c)
 */

void __fastcall CopyOutputString(volatile void **a1, PWCH *a2, unsigned int a3, int a4)
{
  SIZE_T v6; // rdx
  unsigned __int64 v9; // rax
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  unsigned int v12; // eax
  unsigned int v13; // r8d
  __int64 v14; // r8

  v6 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v6 )
    ProbeForRead(a1[2], v6, 2 - (a4 != 0));
  else
    *W32UserProbeAddress = 0;
  if ( *((_DWORD *)a2 + 1) < 0x80000000 )
  {
    if ( a4 )
    {
      v13 = *((_DWORD *)a1 + 2);
      if ( *(_DWORD *)a1 < v13 )
        v13 = *(_DWORD *)a1;
      v10 = MBToWCSEx((__int16)a1, (const CHAR *)a1[2], v13, a2 + 1, a3);
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
      v10 = wcsncpycch(a2[1], a1[2], (unsigned int)v9);
    }
    a3 = v10;
LABEL_9:
    *(_DWORD *)a2 = 2 * a3;
    return;
  }
  if ( a4 )
  {
    v14 = *((unsigned int *)a1 + 2);
    if ( a3 < (unsigned int)v14 )
      v14 = a3;
    v12 = strncpycch(a2[1], a1[2], v14);
  }
  else
  {
    if ( *(_DWORD *)a1 >= *((_DWORD *)a1 + 2) >> 1 )
      v11 = (unsigned __int64)*((unsigned int *)a1 + 2) >> 1;
    else
      LODWORD(v11) = *(_DWORD *)a1;
    v12 = WCSToMBEx(0LL, a1[2], (unsigned int)v11, a2 + 1, a3);
    if ( v12 >= a3 )
      goto LABEL_17;
    *((_BYTE *)a2[1] + v12) = 0;
  }
  a3 = v12;
LABEL_17:
  *(_DWORD *)a2 = a3;
}
