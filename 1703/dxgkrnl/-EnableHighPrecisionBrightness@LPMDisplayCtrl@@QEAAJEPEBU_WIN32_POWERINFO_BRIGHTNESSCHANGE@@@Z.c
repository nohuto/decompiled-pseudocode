/*
 * XREFs of ?EnableHighPrecisionBrightness@LPMDisplayCtrl@@QEAAJEPEBU_WIN32_POWERINFO_BRIGHTNESSCHANGE@@@Z @ 0x1C0197D34
 * Callers:
 *     DxgkEnableHighPrecisionBrightness @ 0x1C0198520 (DxgkEnableHighPrecisionBrightness.c)
 * Callees:
 *     DxgkLogCodePointPacket @ 0x1C000BD40 (DxgkLogCodePointPacket.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 */

__int64 __fastcall LPMDisplayCtrl::EnableHighPrecisionBrightness(
        LPMDisplayCtrl *this,
        char a2,
        const struct _WIN32_POWERINFO_BRIGHTNESSCHANGE *a3)
{
  PFILE_OBJECT *v3; // rsi
  char v6; // r12
  signed int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  struct _LIST_ENTRY *Flink; // rbx
  unsigned int v12; // edx
  unsigned int v13; // r8d

  v3 = FileObject;
  v6 = 1;
  if ( !a2 )
  {
    memset(FileObject + 17, 0, 0x20uLL);
    *((_DWORD *)v3 + 11) = 0;
    goto LABEL_7;
  }
  if ( *((_DWORD *)FileObject + 10) && *((_DWORD *)FileObject + 28) )
  {
    memmove(FileObject + 17, a3, 0x20uLL);
    *((_DWORD *)v3 + 11) = 1;
LABEL_7:
    v7 = 0;
    goto LABEL_8;
  }
  memset(FileObject + 17, 0, 0x20uLL);
  *((_DWORD *)v3 + 11) = 0;
  v7 = -1073741637;
  v10 = WdLogNewEntry5_WdError(v9, v8);
  *(_QWORD *)(v10 + 24) = -1073741637LL;
  WdLogEvent5_WdError(v10);
LABEL_8:
  if ( !a2 || v7 < 0 )
    v6 = 0;
  Flink = v3[2]->IrpList.Flink[4].Flink;
  KeWaitForSingleObject(&Flink[262], Executive, 0, 0, 0LL);
  BYTE1(Flink[261].Flink) = v6;
  KeReleaseMutex((PRKMUTEX)&Flink[262], 0);
  v12 = -1;
  if ( a2 )
    v13 = *((_DWORD *)a3 + 5);
  else
    v13 = -1;
  if ( a2 )
    v12 = *((_DWORD *)a3 + 1);
  DxgkLogCodePointPacket(0x53u, v12, v13, v7, *(__int64 *)((char *)&v3[2][1].PrivateCacheMap + 4));
  return (unsigned int)v7;
}
