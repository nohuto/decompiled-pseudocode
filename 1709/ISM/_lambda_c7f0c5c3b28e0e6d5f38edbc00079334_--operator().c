/*
 * XREFs of _lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator() @ 0x1800514E8
 * Callers:
 *     ?UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ @ 0x180051180 (-UpdateRegistryTuneables@MPCSixDofProcessor@@CAXXZ.c)
 * Callees:
 *     <none>
 */

int __fastcall lambda_c7f0c5c3b28e0e6d5f38edbc00079334_::operator()(__int64 a1, const WCHAR *a2, float *a3)
{
  PVOID v5; // rax

  LODWORD(v5) = RegGetValueW(
                  HKEY_LOCAL_MACHINE,
                  L"Software\\Microsoft\\Windows\\ISM\\6dof",
                  a2,
                  0x10u,
                  0LL,
                  *(PVOID *)a1,
                  *(LPDWORD *)(a1 + 8));
  if ( !(_DWORD)v5 )
  {
    v5 = *(PVOID *)a1;
    *a3 = (float)**(int **)a1 / 1000.0;
  }
  return (int)v5;
}
