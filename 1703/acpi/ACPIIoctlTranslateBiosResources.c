/*
 * XREFs of ACPIIoctlTranslateBiosResources @ 0x1C009FA5C
 * Callers:
 *     ACPIIrpDispatchDeviceControl @ 0x1C00013B0 (ACPIIrpDispatchDeviceControl.c)
 * Callees:
 *     memmove @ 0x1C002C840 (memmove.c)
 *     PnpBiosResourcesToNtResources @ 0x1C008D264 (PnpBiosResourcesToNtResources.c)
 */

__int64 __fastcall ACPIIoctlTranslateBiosResources(ULONG_PTR a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  unsigned int v5; // esi
  unsigned int v6; // ebx
  int v7; // eax
  _WORD *v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rbx
  unsigned int *v12; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v12 = 0LL;
  if ( *(_DWORD *)(a3 + 16) )
  {
    v6 = *(_DWORD *)(a3 + 8);
    if ( v6 >= 8 )
    {
      *(_QWORD *)(a2 + 56) = 0LL;
      v7 = PnpBiosResourcesToNtResources(a1, *(_QWORD *)(a2 + 24), 4u, &v12);
      v3 = v12;
      v5 = v7;
      if ( v7 >= 0 && v12 )
      {
        v8 = *(_WORD **)(a2 + 24);
        v9 = 32 * v12[9] + 8;
        if ( v6 >= v9 )
        {
          v10 = v9;
          memmove(v8, v12 + 8, v9);
          *(_QWORD *)(a2 + 56) = v10;
        }
        else
        {
          v5 = -2147483643;
          *v8 = *((_WORD *)v12 + 16);
          v8[1] = *((_WORD *)v3 + 17);
          *((_DWORD *)v8 + 1) = v3[9];
          *(_QWORD *)(a2 + 56) = 8LL;
        }
      }
    }
    else
    {
      v5 = -1073741789;
    }
  }
  else
  {
    v5 = -1073741811;
  }
  *(_DWORD *)(a2 + 48) = v5;
  IofCompleteRequest((PIRP)a2, 0);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return v5;
}
