/*
 * XREFs of RIMIDEInjectMouseInput @ 0x1C010B128
 * Callers:
 *     RIMIDEInjectMouseFromMouseInputStruct @ 0x1C010AEE4 (RIMIDEInjectMouseFromMouseInputStruct.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     memset @ 0x1C00A2500 (memset.c)
 */

__int64 __fastcall RIMIDEInjectMouseInput(char *a1, const void *a2, unsigned int a3)
{
  __int64 v3; // rbx
  int v5; // r14d
  char *v6; // r13
  __int64 v7; // r15
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  v3 = a3;
  v5 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v6 = (char *)Object;
    v7 = *((_QWORD *)Object + 51);
    RIMLockExclusive(v7 + 96);
    if ( *(_BYTE *)(v7 + 73) )
    {
      v5 = -1073741637;
    }
    else
    {
      RIMLockExclusive(v7 + 696);
      *((_DWORD *)v6 + 80) = 0;
      *((_QWORD *)v6 + 41) = 24 * v3;
      memset(v6 + 532, 0, 0xF0uLL);
      memmove(v6 + 532, a2, *((_QWORD *)v6 + 41));
      rimProcessDeviceBufferAndStartRead(v7, (__int64)(v6 + 64));
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
