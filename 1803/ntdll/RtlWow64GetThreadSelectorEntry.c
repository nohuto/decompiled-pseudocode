/*
 * XREFs of RtlWow64GetThreadSelectorEntry @ 0x1800860E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlWow64GetThreadSelectorEntry(void *a1, __int64 a2, int a3, _DWORD *a4)
{
  NTSTATUS InformationThread; // r8d
  unsigned int v7; // eax
  unsigned int v8; // eax
  int v9; // eax
  int v10; // edx
  unsigned int v11; // eax
  _BYTE ThreadInformation[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+48h] [rbp-30h]

  if ( a3 != 12 )
    return 3221225476LL;
  InformationThread = 0;
  v7 = *(_DWORD *)a2 & 0xFFFFFFFC;
  if ( v7 )
  {
    if ( v7 == 32 )
    {
      *(_BYTE *)(a2 + 11) = 0;
      *(_BYTE *)(a2 + 8) = 0;
      v8 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1B00;
    }
    else
    {
      if ( v7 != 40 )
      {
        if ( v7 == 80 )
        {
          InformationThread = ZwQueryInformationThread(a1, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          if ( InformationThread >= 0 )
          {
            v10 = v14 + 0x2000;
            *(_WORD *)(a2 + 4) = 4095;
            *(_WORD *)(a2 + 6) = v10;
            *(_BYTE *)(a2 + 11) = HIBYTE(v10);
            *(_BYTE *)(a2 + 8) = BYTE2(v10);
            v11 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1300;
            *(_DWORD *)(a2 + 8) = v11;
            v11 |= 0x6000u;
            *(_DWORD *)(a2 + 8) = v11;
            v11 |= 0x8000u;
            *(_DWORD *)(a2 + 8) = v11;
            v11 &= 0xFFF0FFFF;
            *(_DWORD *)(a2 + 8) = v11;
            v11 &= ~0x100000u;
            *(_DWORD *)(a2 + 8) = v11;
            v11 &= ~0x200000u;
            *(_DWORD *)(a2 + 8) = v11;
            v11 |= 0x400000u;
            *(_DWORD *)(a2 + 8) = v11;
            *(_DWORD *)(a2 + 8) = v11 & 0xFF7FFFFF;
          }
        }
        else
        {
          InformationThread = -1073741823;
        }
        goto LABEL_6;
      }
      *(_BYTE *)(a2 + 11) = 0;
      *(_BYTE *)(a2 + 8) = 0;
      v8 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1300;
    }
    *(_DWORD *)(a2 + 4) = 0xFFFF;
    *(_DWORD *)(a2 + 8) = v8;
    v9 = v8 | 0x6000;
    *(_DWORD *)(a2 + 8) = v9;
    v9 |= 0x8000u;
    *(_DWORD *)(a2 + 8) = v9;
    v9 |= 0xF0000u;
    *(_DWORD *)(a2 + 8) = v9;
    v9 &= ~0x100000u;
    *(_DWORD *)(a2 + 8) = v9;
    v9 &= ~0x200000u;
    *(_DWORD *)(a2 + 8) = v9;
    v9 |= 0x400000u;
    *(_DWORD *)(a2 + 8) = v9;
    *(_DWORD *)(a2 + 8) = v9 | 0x800000;
  }
  else
  {
    *(_QWORD *)(a2 + 4) = 0LL;
  }
LABEL_6:
  if ( InformationThread >= 0 )
  {
    if ( a4 )
      *a4 = 8;
  }
  return (unsigned int)InformationThread;
}
