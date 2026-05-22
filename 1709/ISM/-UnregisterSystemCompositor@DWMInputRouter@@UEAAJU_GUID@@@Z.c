/*
 * XREFs of ?UnregisterSystemCompositor@DWMInputRouter@@UEAAJU_GUID@@@Z @ 0x18001C1F0
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0qqq @ 0x180001C0C (McTemplateU0qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSystemCompositor(DWMInputRouter *this, struct _GUID *a2)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx
  unsigned int v6; // r9d
  __int64 v7; // r10
  __int64 v8; // rdx
  __int64 v10; // rsi
  __int64 v11; // rcx
  char v12; // [rsp+30h] [rbp-48h] BYREF

  v3 = 0;
  v5 = 0LL;
  v6 = *((_DWORD *)this + 84);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 41);
    while ( 1 )
    {
      v8 = 10LL * (unsigned int)v5;
      if ( *(_QWORD *)(v7 + 80LL * (unsigned int)v5) == *(_QWORD *)&a2->Data1
        && *(_QWORD *)(v7 + 80LL * (unsigned int)v5 + 8) == *(_QWORD *)a2->Data4 )
      {
        break;
      }
      v5 = (unsigned int)(v5 + 1);
      if ( (unsigned int)v5 >= v6 )
        goto LABEL_6;
    }
    *(_OWORD *)(80LL * (unsigned int)v5 + v7) = *(_OWORD *)((char *)this + 344);
    v10 = 80LL * (unsigned int)v5 + *((_QWORD *)this + 41) + 16LL;
    if ( (char *)v10 != &v12 )
    {
      v11 = *(_QWORD *)(v10 + 56);
      if ( v11 )
      {
        LOBYTE(v8) = v11 != v10;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v8);
        *(_QWORD *)(v10 + 56) = 0LL;
      }
    }
    --*((_DWORD *)this + 85);
  }
  else
  {
LABEL_6:
    v3 = -2147467259;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      McTemplateU0qqq(v5, &MinInput_Warning_CheckResult, 0, 221, 5);
  }
  return v3;
}
