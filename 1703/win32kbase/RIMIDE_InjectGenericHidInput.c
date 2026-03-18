/*
 * XREFs of RIMIDE_InjectGenericHidInput @ 0x1C010C72C
 * Callers:
 *     NtUserInjectGenericHidInput @ 0x1C00E24C0 (NtUserInjectGenericHidInput.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0054210 (RawInputManagerDeviceObjectResolveHandle.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C009990C (rimProcessDeviceBufferAndStartRead.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

_BOOL8 __fastcall RIMIDE_InjectGenericHidInput(char *a1, __int64 a2, char *a3, unsigned int a4)
{
  size_t v4; // rbx
  int v6; // edi
  _QWORD *v7; // rsi
  __int64 v8; // r15
  __int64 v9; // rax
  PVOID Object[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a4;
  Object[0] = 0LL;
  v6 = RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, Object);
  if ( v6 >= 0 )
  {
    v7 = Object[0];
    v8 = *((_QWORD *)Object[0] + 51);
    Object[1] = (PVOID)v8;
    if ( (*((_DWORD *)Object[0] + 62) & 0x1000) != 0
      && *(unsigned __int16 *)(*((_QWORD *)Object[0] + 65) + 44LL) == (_DWORD)v4 )
    {
      v9 = *((_QWORD *)Object[0] + 55);
      if ( !*(_DWORD *)(v9 + 16) )
        *(_DWORD *)(v9 + 16) = 1;
      RIMLockExclusive(v8 + 96);
      if ( !*(_BYTE *)(v8 + 73) )
      {
        if ( (_DWORD)v4 )
        {
          if ( ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a3) != 0 )
            ExRaiseDatatypeMisalignment();
          if ( &a3[v4] > (char *)W32UserProbeAddress || &a3[v4] < a3 )
            *(_BYTE *)W32UserProbeAddress = 0;
        }
        memmove(*(void **)(v7[65] + 24LL), a3, v4);
        RIMLockExclusive(v8 + 696);
        *((_DWORD *)v7 + 80) = 0;
        v7[41] = *(unsigned __int16 *)(v7[65] + 44LL);
        rimProcessDeviceBufferAndStartRead(v8, (__int64)(v7 + 8));
        *(_QWORD *)(v8 + 704) = 0LL;
        ExReleasePushLockExclusiveEx(v8 + 696, 0LL);
        KeLeaveCriticalRegion();
      }
      *(_QWORD *)(v8 + 104) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 96, 0LL);
      KeLeaveCriticalRegion();
    }
    ObfDereferenceObject(v7);
  }
  return v6 >= 0;
}
