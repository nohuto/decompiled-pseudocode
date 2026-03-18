/*
 * XREFs of ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C0221278
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C0220300 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     memmove @ 0x1C01401C0 (memmove.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREPARSED_DATA@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0224D74 (-ParseInputReport@InteractiveControlParser@@SAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAU_HIDP_PREP.c)
 */

__int64 __fastcall InteractiveControlInput::ParseInputReport(
        InteractiveControlInput *this,
        unsigned __int8 *a2,
        unsigned int a3)
{
  size_t v4; // rbx
  unsigned __int64 v6; // rsi
  int v7; // ebp
  __int64 v8; // rcx
  void *v9; // rax

  v4 = a3;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v7 = InteractiveControlParser::ParseInputReport(
         (struct _INTERACTIVECTRL_CAPABILITIES *)(*((_QWORD *)this + 5) + 72LL),
         *(struct _HIDP_PREPARSED_DATA **)(*((_QWORD *)this + 5) + 248LL),
         a2,
         a3,
         (InteractiveControlInput *)((char *)this + 52));
  if ( v7 >= 0 )
  {
    if ( *(_DWORD *)(*((_QWORD *)this + 5) + 228LL) )
    {
      v8 = *((_QWORD *)this + 10);
      if ( v8 )
        Win32FreePool(v8);
      v9 = (void *)Win32AllocPool(v4, 1819440195LL);
      *((_QWORD *)this + 10) = v9;
      memmove(v9, a2, v4);
    }
    *((_DWORD *)this + 7) = v6;
  }
  return (unsigned int)v7;
}
