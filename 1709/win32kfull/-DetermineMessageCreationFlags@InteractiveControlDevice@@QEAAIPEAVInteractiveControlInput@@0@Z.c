/*
 * XREFs of ?DetermineMessageCreationFlags@InteractiveControlDevice@@QEAAIPEAVInteractiveControlInput@@0@Z @ 0x1C0220D30
 * Callers:
 *     ?FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z @ 0x1C0220EF8 (-FlushBufferedInput@InteractiveControlDevice@@QEAAXI@Z.c)
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z @ 0x1C02216E4 (-QueueAndGenerateInput@InteractiveControlDevice@@QEAAJPEAXK@Z.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C0112544 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDevice::DetermineMessageCreationFlags(
        InteractiveControlDevice *this,
        struct InteractiveControlInput *a2,
        struct InteractiveControlInput *a3)
{
  int v3; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  int v10; // edx
  unsigned int v11; // r8d
  int v12; // edx
  int v13; // r8d
  int v14; // edx
  int v15; // eax
  int v16; // edi

  v3 = 0;
  if ( *((_DWORD *)this + 94) )
  {
    if ( *((_QWORD *)this + 6) )
    {
      v7 = *((_DWORD *)a3 + 18);
      if ( (v7 & 4) != 0 )
        *((_DWORD *)a3 + 18) = v7 & 0xFFFFFF7B | 0x80;
    }
  }
  if ( !*((_DWORD *)InteractiveControlManager::Instance() + 39) )
  {
    v8 = *((_DWORD *)a3 + 18);
    if ( (v8 & 4) != 0 || (v8 & 0x80u) != 0 )
      *((_DWORD *)a3 + 19) = 0;
  }
  if ( a2 )
  {
    v9 = *((_DWORD *)a3 + 18) & 4;
    if ( (v9 != 0) != ((*((_DWORD *)a2 + 18) >> 2) & 1) )
    {
      v3 = v9 != 0 ? 512 : 256;
      if ( !v9 )
        *((_DWORD *)this + 95) = 0;
    }
    v10 = *((_DWORD *)a3 + 18);
    v11 = *((_DWORD *)a2 + 18);
    if ( ((v10 & 0x80) != 0) != ((v11 >> 7) & 1) )
      v3 |= (*((_DWORD *)a3 + 18) & 0x80) != 0 ? 64 : 32;
    if ( (v10 & 1) != (v11 & 1) )
      v3 |= 1 << !(v10 & 1);
    if ( *((_DWORD *)a3 + 14) != *((_DWORD *)a2 + 14)
      || *((_DWORD *)a3 + 15) != *((_DWORD *)a2 + 15)
      || (((unsigned __int8)v10 ^ (unsigned __int8)v11) & 2) != 0 )
    {
      v12 = v10 & 2;
      if ( (v12 != 0) == ((v11 >> 1) & 1) )
      {
        if ( v12 )
          v3 |= 0x1000u;
      }
      else
      {
        v3 |= v12 != 0 ? 1024 : 2048;
        if ( !v12 )
        {
          *((_QWORD *)a3 + 7) = *((_QWORD *)a2 + 7);
          *((_QWORD *)a3 + 8) = *((_QWORD *)a2 + 8);
        }
      }
    }
  }
  else
  {
    v13 = *((_DWORD *)a3 + 18);
    v14 = ((v13 & 4) << 7) | 0x40;
    if ( (v13 & 0x80u) == 0 )
      v14 = (*((_DWORD *)a3 + 18) & 4) << 7;
    v3 = v14 | 1;
    if ( (v13 & 1) == 0 )
      v3 = v14;
    if ( (v13 & 2) != 0 )
      v3 |= 0x400u;
  }
  v15 = *((_DWORD *)a3 + 19);
  v16 = v3 | 0x80;
  if ( !v15 )
    v16 = v3;
  if ( *((_DWORD *)this + 95) )
  {
    *((_DWORD *)this + 95) = 0;
    v16 |= 0x2000u;
  }
  return v16 & (unsigned int)~*((_DWORD *)InteractiveControlManager::Instance() + 23);
}
