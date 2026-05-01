/*
 * XREFs of ?GetIids@CProcessMemoryReport@System@Windows@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18000B1D0
 * Callers:
 *     ?GetIids@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x180008370 (-GetIids@CProcessMemoryReport@System@Windows@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::System::CProcessMemoryReport::GetIids(
        Windows::System::CProcessMemoryReport *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  unsigned int v3; // ebx
  struct _GUID *v6; // rax

  v3 = 0;
  *a3 = 0LL;
  *a2 = 0;
  v6 = (struct _GUID *)CoTaskMemAlloc(0x30uLL);
  if ( v6 )
  {
    *v6 = GUID_087305a8_9b70_4782_8741_3a982b6ce5e4;
    v6[1] = GUID_00000038_0000_0000_c000_000000000046;
    v6[2] = GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90;
    *a2 = 3;
    *a3 = v6;
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v3;
}
