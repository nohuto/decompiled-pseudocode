/*
 * XREFs of NtQueryLicenseValue @ 0x1405490A0
 * Callers:
 *     ExpGetNtProductTypeFromLicenseValue @ 0x14063B4DC (ExpGetNtProductTypeFromLicenseValue.c)
 *     MiMemoryLicense @ 0x1408BF670 (MiMemoryLicense.c)
 * Callees:
 *     memmove @ 0x1401BC900 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     ExQueryLicenseValueInternal @ 0x140549360 (ExQueryLicenseValueInternal.c)
 *     ProbeForWrite @ 0x14059C6A0 (ProbeForWrite.c)
 *     ExRaiseDatatypeMisalignment @ 0x1407C5940 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall NtQueryLicenseValue(unsigned __int64 a1, _DWORD *a2, volatile void *a3, unsigned int a4, _DWORD *a5)
{
  SIZE_T v5; // r12
  int LicenseValueInternal; // ebx
  char PreviousMode; // dl
  _DWORD *v10; // r15
  int v11; // eax
  void *v12; // rcx
  unsigned __int64 v13; // rdx
  PVOID PoolWithTag; // rax
  void *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // eax
  _DWORD Size[3]; // [rsp+34h] [rbp-64h] BYREF
  PVOID P; // [rsp+40h] [rbp-58h]
  int v22; // [rsp+48h] [rbp-50h] BYREF
  void *Src; // [rsp+50h] [rbp-48h]
  int v24; // [rsp+A0h] [rbp+8h] BYREF
  _DWORD *v25; // [rsp+A8h] [rbp+10h]
  volatile void *v26; // [rsp+B0h] [rbp+18h]
  unsigned int v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v26 = a3;
  v25 = a2;
  v5 = a4;
  LicenseValueInternal = 0;
  P = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( a1 && (v10 = a5) != 0LL && (a3 || !a4) )
  {
    if ( a4 > 0x800000 )
    {
      LicenseValueInternal = -1073741801;
    }
    else if ( PreviousMode )
    {
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      v11 = *(_DWORD *)a1;
      v22 = *(_DWORD *)a1;
      v12 = *(void **)(a1 + 8);
      Src = v12;
      if ( v12 && (_WORD)v11 && (v11 & 1) == 0 )
      {
        if ( ((unsigned __int8)v12 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v13 = (unsigned __int64)v12 + (unsigned __int16)v11;
        if ( v13 > 0x7FFFFFFF0000LL || v13 < (unsigned __int64)v12 )
          MEMORY[0x7FFFFFFF0000] = 0;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned __int16)v22, 0x20534C53u);
        P = PoolWithTag;
        if ( PoolWithTag )
        {
          v15 = PoolWithTag;
          memmove(PoolWithTag, Src, (unsigned __int16)v22);
          Src = v15;
          if ( a2 )
          {
            v16 = (__int64)a2;
            if ( (unsigned __int64)a2 >= 0x7FFFFFFF0000LL )
              v16 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v16 = *(_DWORD *)v16;
            v24 = *a2;
          }
          if ( a3
            && (_DWORD)v5
            && (ProbeForWrite(a3, v5, 1u),
                (*(_QWORD *)&Size[1] = ExAllocatePoolWithTag(PagedPool, v5, 0x20534C53u)) == 0LL) )
          {
            LicenseValueInternal = -1073741801;
          }
          else
          {
            v17 = (__int64)v10;
            if ( (unsigned __int64)v10 >= 0x7FFFFFFF0000LL )
              v17 = 0x7FFFFFFF0000LL;
            *(_DWORD *)v17 = *(_DWORD *)v17;
            Size[0] = *v10;
          }
        }
        else
        {
          LicenseValueInternal = -1073741801;
        }
      }
      else
      {
        LicenseValueInternal = -1073741811;
      }
      if ( LicenseValueInternal >= 0 )
      {
        LicenseValueInternal = ExQueryLicenseValueInternal(
                                 (unsigned int)&v22,
                                 (unsigned int)&v24,
                                 Size[1],
                                 v5,
                                 (__int64)Size);
        if ( a2 )
          *a2 = v24;
        v18 = Size[0];
        *v10 = Size[0];
        if ( LicenseValueInternal >= 0 && a3 )
        {
          if ( (unsigned int)v5 < v18 )
            LicenseValueInternal = -1073741789;
          else
            memmove((void *)a3, *(const void **)&Size[1], v18);
        }
      }
    }
    else
    {
      LicenseValueInternal = ExQueryLicenseValueInternal(a1, (_DWORD)a2, (_DWORD)a3, a4, (__int64)a5);
    }
  }
  else
  {
    LicenseValueInternal = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( *(_QWORD *)&Size[1] )
    ExFreePoolWithTag(*(PVOID *)&Size[1], 0);
  return (unsigned int)LicenseValueInternal;
}
