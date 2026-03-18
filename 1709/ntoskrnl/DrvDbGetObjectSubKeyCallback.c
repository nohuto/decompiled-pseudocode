/*
 * XREFs of DrvDbGetObjectSubKeyCallback @ 0x1404483F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1400DED10 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     RtlStringCchCopyExW @ 0x1400DF820 (RtlStringCchCopyExW.c)
 *     _wcsicmp @ 0x14015EB30 (_wcsicmp.c)
 *     ZwClose @ 0x14017DAA0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140521D98 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1405847D8 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpCtxRegEnumKeyWithCallback @ 0x140594ADC (_PnpCtxRegEnumKeyWithCallback.c)
 */

__int64 __fastcall DrvDbGetObjectSubKeyCallback(__int64 *a1, int a2, const wchar_t *a3, __int64 a4)
{
  const wchar_t **v4; // r14
  PVOID v5; // rsi
  int v6; // edi
  unsigned int v11; // edi
  wchar_t *PoolWithTag; // rax
  wchar_t *v13; // r14
  wchar_t *v14; // rcx
  __int64 v15; // rcx
  int v16; // ecx
  unsigned __int8 (__fastcall *v17)(__int64 *, wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v18; // eax
  unsigned int v19; // edi
  int v21; // eax
  __int64 v22; // rcx
  _OWORD *v23; // rax
  __int64 v24; // rdx
  _OWORD *v25; // rcx
  _OWORD *v26; // rax
  __int128 v27; // xmm1
  int v28; // [rsp+40h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-28h] BYREF
  size_t pcchRemaining; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-18h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF

  v4 = (const wchar_t **)&off_1402B97D0;
  Handle = 0LL;
  v5 = 0LL;
  v32 = 0;
  v6 = 0;
  v28 = 0;
  while ( wcsicmp(a3, *v4) )
  {
    ++v6;
    ++v4;
    if ( v6 )
    {
      v11 = 256;
      PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x200uLL, 0x42444450u);
      v13 = PoolWithTag;
      if ( !PoolWithTag )
        break;
      v14 = PoolWithTag;
      if ( *(_WORD *)(a4 + 8) )
      {
        if ( RtlStringCchCopyExW(
               PoolWithTag,
               0x100uLL,
               (NTSTRSAFE_PCWSTR)(a4 + 8),
               (NTSTRSAFE_PWSTR *)&DestinationString,
               &pcchRemaining,
               0x900u) >= 0 )
        {
          v21 = pcchRemaining;
          if ( pcchRemaining >= 2 )
          {
            v22 = *(_QWORD *)&DestinationString.Length;
            **(_WORD **)&DestinationString.Length = 92;
            v14 = (wchar_t *)(v22 + 2);
            *v14 = 0;
            v11 = v21 - 2;
            goto LABEL_6;
          }
        }
      }
      else
      {
LABEL_6:
        if ( RtlStringCchCopyW(v14, v11, a3) >= 0 )
        {
          LODWORD(v15) = 0;
          if ( a1 )
            v15 = *a1;
          if ( (int)SysCtxRegOpenKey(v15, a2, (_DWORD)a3, 8, 131097, (__int64)&Handle) >= 0
            && (int)PnpCtxRegQueryInfoKey(v16, (_DWORD)Handle, (unsigned int)&v32, 0, (__int64)&v28, 0LL) >= 0 )
          {
            if ( !v32 || *(_DWORD *)(a4 + 4) >= *(_DWORD *)a4 )
              goto LABEL_12;
            v23 = ExAllocatePoolWithTag(PagedPool, 0x228uLL, 0x42444450u);
            v5 = v23;
            if ( v23 )
            {
              v24 = 4LL;
              v25 = v23;
              v26 = (_OWORD *)a4;
              do
              {
                *v25 = *v26;
                v25[1] = v26[1];
                v25[2] = v26[2];
                v25[3] = v26[3];
                v25[4] = v26[4];
                v25[5] = v26[5];
                v25[6] = v26[6];
                v25 += 8;
                v27 = v26[7];
                v26 += 8;
                *(v25 - 1) = v27;
                --v24;
              }
              while ( v24 );
              *v25 = *v26;
              v25[1] = v26[1];
              *((_QWORD *)v25 + 4) = *((_QWORD *)v26 + 4);
              ++*((_DWORD *)v5 + 1);
              RtlStringCchCopyExW((NTSTRSAFE_PWSTR)v5 + 4, 0x100uLL, v13, 0LL, 0LL, 0x900u);
              PnpCtxRegEnumKeyWithCallback(a1, Handle, &DrvDbGetObjectSubKeyCallback, v5);
              *(_QWORD *)(a4 + 536) = *((_QWORD *)v5 + 67);
              *(_DWORD *)(a4 + 544) = *((_DWORD *)v5 + 136);
              *(_DWORD *)(a4 + 548) = *((_DWORD *)v5 + 137);
LABEL_12:
              if ( v28 )
              {
                v17 = *(unsigned __int8 (__fastcall **)(__int64 *, wchar_t *, _QWORD, _QWORD))(a4 + 520);
                if ( (!v17 || v17(a1, v13, 0LL, *(_QWORD *)(a4 + 528)))
                  && RtlInitUnicodeStringEx(&DestinationString, v13) >= 0 )
                {
                  v18 = *(_DWORD *)(a4 + 544);
                  v19 = DestinationString.MaximumLength >> 1;
                  *(_DWORD *)(a4 + 548) += v19;
                  if ( v18 > v19 )
                  {
                    RtlStringCchCopyExW(*(NTSTRSAFE_PWSTR *)(a4 + 536), v18, v13, 0LL, 0LL, 0x900u);
                    *(_QWORD *)(a4 + 536) += 2LL * v19;
                    *(_DWORD *)(a4 + 544) -= v19;
                  }
                }
              }
              if ( v5 )
                ExFreePoolWithTag(v5, 0);
            }
          }
        }
      }
      ExFreePoolWithTag(v13, 0);
      break;
    }
  }
  if ( Handle )
    ZwClose(Handle);
  return 0LL;
}
