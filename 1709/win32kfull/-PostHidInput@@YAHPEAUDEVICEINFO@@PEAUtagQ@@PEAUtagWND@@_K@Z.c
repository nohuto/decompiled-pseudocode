/*
 * XREFs of ?PostHidInput@@YAHPEAUDEVICEINFO@@PEAUtagQ@@PEAUtagWND@@_K@Z @ 0x1C01B5F24
 * Callers:
 *     xxxProcessHidInput @ 0x1C01B6F40 (xxxProcessHidInput.c)
 * Callees:
 *     AllocateHidData @ 0x1C00072D4 (AllocateHidData.c)
 *     FreeHidData @ 0x1C0009C90 (FreeHidData.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     memmove @ 0x1C01456C0 (memmove.c)
 */

__int64 __fastcall PostHidInput(struct DEVICEINFO *a1, struct tagQ *a2, struct tagWND *a3, __int64 a4)
{
  size_t v5; // rsi
  unsigned int v9; // r12d
  int v10; // ebp
  _DWORD *HidData; // rax
  _QWORD *v13; // rbx

  v5 = *((unsigned int *)a1 + 66);
  v9 = *(unsigned __int16 *)(*((_QWORD *)a1 + 57) + 44LL);
  v10 = *((_DWORD *)a1 + 66) / v9;
  if ( *((_DWORD *)a1 + 66) % v9 )
    return 0LL;
  if ( !v10 )
    return 0LL;
  if ( (unsigned int)v5 >= 0xFFFFFFF8 )
    return 0LL;
  HidData = (_DWORD *)AllocateHidData(*(_QWORD *)a1, 2, (unsigned int)(v5 + 8), a4, (__int64)a3);
  v13 = HidData;
  if ( !HidData )
    return 0LL;
  HidData[14] = v9;
  HidData[15] = v10;
  memmove(HidData + 16, *(const void **)(*((_QWORD *)a1 + 57) + 24LL), v5);
  if ( !(unsigned int)PostInputMessage((__int64)a2, (__int64)a3, 0xFFu, a4, *v13, 0, 0LL, 0LL, 0, 0LL, 0LL, 0LL) )
  {
    FreeHidData((__int64)v13);
    return 0LL;
  }
  return 1LL;
}
