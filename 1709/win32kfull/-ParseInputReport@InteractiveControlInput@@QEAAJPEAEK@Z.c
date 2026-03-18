/*
 * XREFs of ?ParseInputReport@InteractiveControlInput@@QEAAJPEAEK@Z @ 0x1C022275C
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02216E4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     memmove @ 0x1C01456C0 (memmove.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C022623C (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 */

__int64 __fastcall InteractiveControlInput::ParseInputReport(
        struct InteractiveControlDevice **this,
        CHAR *a2,
        ULONG a3)
{
  size_t v4; // rbx
  unsigned __int64 v6; // rsi
  __int64 v7; // rdx
  int v8; // ebp
  __int64 v9; // r8
  struct InteractiveControlDevice *v10; // rcx
  struct InteractiveControlDevice *v11; // rax

  v4 = a3;
  v6 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  v8 = InteractiveControlParser::ParseInputReport(
         this[5],
         a2,
         a3,
         (struct tagINTERACTIVECTRL_INFO *)((char *)this + 52));
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)this[5] + 57) )
    {
      v10 = this[10];
      if ( v10 )
        Win32FreePool(v10, v7, v9);
      v11 = (struct InteractiveControlDevice *)Win32AllocPool(v4, 1819440195LL);
      this[10] = v11;
      memmove(v11, a2, v4);
    }
    *((_DWORD *)this + 7) = v6;
  }
  return (unsigned int)v8;
}
