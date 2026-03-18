/*
 * XREFs of ?GetVidSchSibmitDataSize@ADAPTER_RENDER@@QEAAIXZ @ 0x1C0024224
 * Callers:
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0024284 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::GetVidSchSibmitDataSize(ADAPTER_RENDER *this)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // r8d

  v1 = *((_QWORD *)this + 2);
  v2 = *(_DWORD *)(v1 + 1968);
  if ( v2 < 0x2000 )
    v3 = 1;
  else
    v3 = *(_DWORD *)(v1 + 248);
  if ( v2 >= 0x2000 || *(_BYTE *)(v1 + 2252) )
    return *(_DWORD *)(v1 + 2176) * (48 * v3 + ((8 * v3 + 175) & 0xFFFFFFF8)) + 8 * (v3 + 57);
  else
    return 1152LL;
}
