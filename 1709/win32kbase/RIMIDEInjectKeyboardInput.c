/*
 * XREFs of RIMIDEInjectKeyboardInput @ 0x1C0109E60
 * Callers:
 *     RIMIDEInjectKeyboardFromKeybdInputStruct @ 0x1C0109C70 (RIMIDEInjectKeyboardFromKeybdInputStruct.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C000D6B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00A45FC (rimProcessDeviceBufferAndStartRead.c)
 */

__int64 __fastcall RIMIDEInjectKeyboardInput(char *a1, _QWORD *a2, unsigned int a3)
{
  int v5; // ebx
  _DWORD *v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // xmm0_8
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // r8
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = Object;
    v7 = *((_QWORD *)Object + 51);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      RIMLockExclusive(v7 + 696);
      v8 = v6[169];
      if ( v8 + a3 < v8 || v8 + a3 > 0xA )
      {
        v5 = -1073741789;
      }
      else
      {
        if ( a3 )
        {
          v9 = a3;
          do
          {
            v10 = *a2;
            a2 = (_QWORD *)((char *)a2 + 12);
            v11 = (v6[170] + 1) % 0xAu;
            v6[170] = v11;
            v12 = *((_DWORD *)a2 - 1);
            v13 = 3 * v11;
            *(_QWORD *)&v6[v13 + 171] = v10;
            v6[v13 + 173] = v12;
            ++v6[169];
            --v9;
          }
          while ( v9 );
        }
        rimProcessDeviceBufferAndStartRead(v7, (__int64)(v6 + 16));
      }
      *(_QWORD *)(v7 + 704) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 696, 0LL);
      KeLeaveCriticalRegion();
    }
    *(_QWORD *)(v7 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(v7 + 96, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v6);
  }
  return (unsigned int)v5;
}
