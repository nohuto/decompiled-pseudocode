/*
 * XREFs of PssNtFreeSnapshot @ 0x180001CE0
 * Callers:
 *     PssNtCaptureSnapshot @ 0x1800019F0 (PssNtCaptureSnapshot.c)
 *     sub_1800DD9C0 @ 0x1800DD9C0 (sub_1800DD9C0.c)
 *     sub_18010840C @ 0x18010840C (sub_18010840C.c)
 * Callees:
 *     PssNtValidateDescriptor @ 0x180001DE0 (PssNtValidateDescriptor.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall PssNtFreeSnapshot(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  result = PssNtValidateDescriptor(a1, retaddr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 2) != 0 )
    {
      if ( *(_QWORD *)(a1 + 904) )
      {
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL);
        *(_QWORD *)(a1 + 904) = 0LL;
      }
      *(_DWORD *)(a1 + 4) &= ~2u;
    }
    else if ( (*(_BYTE *)(a1 + 4) & 4) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 904);
      if ( v3 )
      {
        v5 = 0LL;
        v6 = v3;
        ZwFreeVirtualMemory(-1LL, &v6, &v5, 0x8000LL);
        *(_QWORD *)(a1 + 904) = 0LL;
        *(_DWORD *)(a1 + 4) &= ~4u;
      }
    }
    if ( *(_QWORD *)(a1 + 1008) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 1008) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 976) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 976) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 920) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 920) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 944) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 944) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 896) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 896) = 0LL;
    }
    if ( *(_QWORD *)(a1 + 872) )
    {
      ZwClose();
      *(_QWORD *)(a1 + 872) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v5 = 0LL;
      v6 = a1;
      ZwFreeVirtualMemory(-1LL, &v6, &v5, 0x8000LL);
    }
    return 0LL;
  }
  return result;
}
