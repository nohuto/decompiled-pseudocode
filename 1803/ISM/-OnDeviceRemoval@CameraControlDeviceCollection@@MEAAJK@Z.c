/*
 * XREFs of ?OnDeviceRemoval@CameraControlDeviceCollection@@MEAAJK@Z @ 0x180074500
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z @ 0x1800752C0 (-OnDeviceRemoval@HIDDeviceCollection@@MEAAJK@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CameraControlDeviceCollection::OnDeviceRemoval(CameraControlDeviceCollection *this, unsigned int a2)
{
  void *v4; // rcx
  char *v5; // rdi
  signed int v6; // ebx
  __int64 v7; // rax
  _DWORD *v8; // rdx
  char v9; // cl
  _DWORD *v10; // rdx
  __int64 v11; // rax
  void *Block[2]; // [rsp+20h] [rbp-18h]

  v4 = 0LL;
  v5 = (char *)this + 2760;
  if ( a2 == *((_DWORD *)this + 2226) )
  {
    v6 = -2147024809;
  }
  else
  {
    v7 = 0LL;
    v8 = (_DWORD *)((char *)this + 2760);
    while ( *v8 != a2 )
    {
      v7 = (unsigned int)(v7 + 1);
      v8 += 6;
      if ( (unsigned int)v7 >= 0x100 )
      {
        v6 = -2147467259;
        goto LABEL_15;
      }
    }
    *(_OWORD *)Block = *(_OWORD *)&v5[24 * v7 + 8];
    v6 = HIDDeviceCollection::OnDeviceRemoval(this, a2);
    if ( v6 >= 0 )
    {
      v9 = 0;
      v10 = v5;
      v11 = 0LL;
      while ( *v10 != a2 )
      {
        v11 = (unsigned int)(v11 + 1);
        v10 += 6;
        if ( (unsigned int)v11 >= 0x100 )
          goto LABEL_13;
      }
      *(_DWORD *)&v5[24 * v11] = *((_DWORD *)v5 + 1536);
      v9 = 1;
LABEL_13:
      v6 = v9 == 0 ? 0x80004005 : 0;
    }
    v4 = Block[0];
  }
LABEL_15:
  if ( v4 )
    operator delete(v4);
  return (unsigned int)v6;
}
