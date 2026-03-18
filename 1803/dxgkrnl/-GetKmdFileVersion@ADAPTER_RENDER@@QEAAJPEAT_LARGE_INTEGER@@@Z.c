/*
 * XREFs of ?GetKmdFileVersion@ADAPTER_RENDER@@QEAAJPEAT_LARGE_INTEGER@@@Z @ 0x1C015A224
 * Callers:
 *     ?DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C00FAB60 (-DxgkQueryAdapterInfoInternal@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 *     ?Initialize@ADAPTER_RENDER@@QEAAJXZ @ 0x1C015A35C (-Initialize@ADAPTER_RENDER@@QEAAJXZ.c)
 * Callees:
 *     ?GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0159F28 (-GetFileVersion@ADAPTER_RENDER@@QEAAJPEAXPEAU_OBJECT_ATTRIBUTES@@PEAT_LARGE_INTEGER@@@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::GetKmdFileVersion(union _LARGE_INTEGER *this, union _LARGE_INTEGER *a2)
{
  void *v3; // rcx
  __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  NTSTATUS v9; // eax
  __int64 v11; // [rsp+30h] [rbp-50h] BYREF
  PVOID P; // [rsp+38h] [rbp-48h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *FileHandle; // [rsp+A0h] [rbp+20h] BYREF

  v3 = 0LL;
  v11 = 0LL;
  FileHandle = 0LL;
  P = 0LL;
  if ( this[64].QuadPart != -1 )
  {
    LODWORD(v5) = 0;
LABEL_8:
    *a2 = this[64];
    goto LABEL_9;
  }
  v6 = IoQueryFullDriverPath(
         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(this[2].QuadPart + 192) + 64LL) + 40LL) + 32LL),
         &v11);
  v5 = v6;
  if ( v6 < 0
    || (ObjectAttributes.RootDirectory = 0LL,
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&v11,
        ObjectAttributes.Length = 48,
        ObjectAttributes.Attributes = 576,
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL,
        v9 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 5u, 0x60u),
        v5 = v9,
        v9 < 0) )
  {
    v8 = WdLogNewEntry5_WdError(v7);
    *(union _LARGE_INTEGER *)(v8 + 24) = this[2];
    *(_QWORD *)(v8 + 32) = v5;
    WdLogEvent5_WdError(v8);
  }
  else
  {
    LODWORD(v5) = ADAPTER_RENDER::GetFileVersion((ADAPTER_RENDER *)this, FileHandle, &ObjectAttributes, this + 64);
  }
  v3 = FileHandle;
  if ( (int)v5 >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v3 )
    ZwClose(v3);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v5;
}
