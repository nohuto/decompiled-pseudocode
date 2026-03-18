/*
 * XREFs of ??$ProcessSectionAttributes@U_DXGK_ALLOCATIONINFO@@@@YAJPEAXPEAU_DXGK_ALLOCATIONINFO@@@Z @ 0x1C016A428
 * Callers:
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C00EA460 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcessSectionAttributes<_DXGK_ALLOCATIONINFO>(PVOID Object, __int64 a2)
{
  struct _OBJECT_TYPE *ObjectType; // rax
  NTSTATUS v5; // ebx
  int v6; // eax
  unsigned int v7; // eax
  bool v8; // zf
  int v9; // eax
  __int64 SectionInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+48h] [rbp-20h]
  __int64 v13; // [rsp+50h] [rbp-18h]
  HANDLE SectionHandle; // [rsp+80h] [rbp+18h] BYREF

  ObjectType = (struct _OBJECT_TYPE *)ObGetObjectType();
  v5 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 0x20000u, ObjectType, 0, &SectionHandle);
  if ( v5 >= 0 )
  {
    SectionInformation = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v5 = ZwQuerySection(SectionHandle, SectionBasicInformation, &SectionInformation, 0x18uLL, 0LL);
    if ( v5 >= 0 )
    {
      v6 = *(_DWORD *)(a2 + 64);
      if ( (v12 & 0x50000000) != 0 )
        v7 = v6 & 0xFFFFFFFB;
      else
        v7 = v6 | 4;
      v8 = (v12 & 0x80000) == 0;
      *(_DWORD *)(a2 + 64) = v7;
      if ( !v8 )
      {
        v9 = *(_DWORD *)(a2 + 12);
        if ( !v9 || (_WORD)v9 )
          *(_DWORD *)(a2 + 12) = 0x10000;
      }
    }
    ObCloseHandle(SectionHandle, 0);
  }
  return (unsigned int)v5;
}
