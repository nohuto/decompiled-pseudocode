/*
 * XREFs of RIMFindInputDeviceForConfig @ 0x1C00077B0
 * Callers:
 *     RIMAllocateHidConfigDesc @ 0x1C00079F4 (RIMAllocateHidConfigDesc.c)
 *     RIMCreateDev @ 0x1C005428C (RIMCreateDev.c)
 *     RIMDoOnPowerNotification @ 0x1C009AC10 (RIMDoOnPowerNotification.c)
 *     RIMDeviceClassNotify @ 0x1C010F110 (RIMDeviceClassNotify.c)
 * Callees:
 *     RIMIsParentCommon @ 0x1C0007984 (RIMIsParentCommon.c)
 */

__int64 __fastcall RIMFindInputDeviceForConfig(int a1, __int64 a2, int a3, _DWORD *a4, _DWORD *a5, _QWORD *a6)
{
  unsigned int v6; // edi
  __int64 v8; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx

  v6 = 0;
  *a4 = 0;
  v8 = *(_QWORD *)(a2 + 552);
  *a5 = 0;
  while ( v8 )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0x200) == 0 && (*(_DWORD *)(v8 + 200) & 0x80u) != 0 )
    {
      v11 = *(_QWORD *)(v8 + 472);
      if ( *(_DWORD *)(v11 + 24) == 7 || (unsigned int)(*(_DWORD *)(v11 + 24) - 1) <= 3 )
      {
        if ( (unsigned int)RIMIsParentCommon(
                             a3,
                             v8,
                             a1,
                             *(unsigned __int16 *)(*(_QWORD *)(v8 + 456) + 110LL),
                             *(_WORD *)(*(_QWORD *)(v8 + 456) + 112LL)) )
        {
          v12 = *(_QWORD *)(v8 + 472);
          v6 = 1;
          *a4 = -__CFSHR__(*(_DWORD *)(v12 + 260), 15);
          if ( a6 )
            *a6 = v8;
          if ( (*(_DWORD *)(v8 + 200) & 0x80u) != 0 && (unsigned int)(*(_DWORD *)(v12 + 24) - 1) <= 3 )
            *a5 = 1;
          return v6;
        }
      }
    }
    v8 = *(_QWORD *)(v8 + 40);
  }
  return v6;
}
