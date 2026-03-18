/*
 * XREFs of ?Resize@HANDLE_TABLE@@AEAAJI@Z @ 0x18007F6FC
 * Callers:
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18007F63C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     ?ResizeToFit@HANDLE_TABLE@@QEAAJI@Z @ 0x18007F798 (-ResizeToFit@HANDLE_TABLE@@QEAAJI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800C4738 (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall HANDLE_TABLE::Resize(void **this, unsigned int a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rbp
  unsigned __int64 v6; // rdi
  unsigned int v7; // ebx
  char *v8; // rax
  void *v9; // r15

  if ( a2 < *((_DWORD *)this + 3) )
  {
    v7 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xDDu);
  }
  else
  {
    v4 = *((unsigned int *)this + 2);
    v5 = v4 * *((unsigned int *)this + 3);
    if ( v5 > 0xFFFFFFFF )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE0u);
    }
    else
    {
      v6 = v4 * a2;
      if ( v6 > 0xFFFFFFFF )
      {
        v7 = -2147024362;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xE1u);
      }
      else
      {
        v7 = 0;
        v8 = (char *)ReallocHeap(this[3], (unsigned int)v6);
        v9 = v8;
        if ( v8 )
        {
          memset_0(&v8[(unsigned int)v5], 0, (unsigned int)(v6 - v5));
          this[3] = v9;
          *((_DWORD *)this + 3) = a2;
        }
        else
        {
          v7 = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xE5u);
        }
      }
    }
  }
  return v7;
}
