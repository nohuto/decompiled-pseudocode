/*
 * XREFs of SmProcessStoreMemoryPriorityRequest @ 0x140447BB0
 * Callers:
 *     SmSetStoreInformation @ 0x140447B00 (SmSetStoreInformation.c)
 * Callees:
 *     SmRereferenceProcessObject @ 0x14002F2FC (SmRereferenceProcessObject.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x14002F340 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     KiSetTimerEx @ 0x14004D040 (KiSetTimerEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     KiUnstackDetachProcess @ 0x1400B1E10 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1400B26F0 (KiStackAttachProcess.c)
 *     ObfDereferenceObject @ 0x1400EE970 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessStoreMemoryPriorityRequest(unsigned __int64 a1, __int64 a2, KPROCESSOR_MODE a3)
{
  __int128 *v3; // r9
  int v4; // edi
  int v5; // ebx
  __int64 v6; // rax
  __int64 *v8; // rax
  PVOID Object; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+38h] [rbp-60h]
  __int128 v11; // [rsp+40h] [rbp-58h]
  PVOID v12; // [rsp+50h] [rbp-48h] BYREF
  $5BC46E0569261879018906DEC3127961 v13; // [rsp+58h] [rbp-40h] BYREF

  v3 = (__int128 *)a1;
  Object = 0LL;
  v4 = 0;
  v10 = 0;
  v11 = 0uLL;
  if ( (_DWORD)a2 == 16 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 >= 0x7FFFFFFF0000LL )
        a1 = 0x7FFFFFFF0000LL;
      *(_BYTE *)a1 = *(_BYTE *)a1;
      *(_BYTE *)(a1 + 15) = *(_BYTE *)(a1 + 15);
    }
    v11 = *v3;
    if ( (_BYTE)v11 == 1 )
    {
      if ( (v11 & 0xFFFFFE00) != 0 )
      {
        v5 = -1073741811;
      }
      else if ( (v11 & 0x100) != 0 )
      {
        v5 = SmRereferenceProcessObject(*((void **)&v11 + 1), a2, a3, &Object);
        if ( v5 >= 0 )
        {
          if ( KeGetCurrentThread()->ApcState.Process != Object )
          {
            v4 = 1;
            KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)&v13);
          }
          v12 = Object;
          v6 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403FA1A8, &v12, 0, 0);
          if ( v6 )
          {
            v8 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, *(_WORD *)(v6 + 16) & 0x3FF);
            v5 = SMKM_STORE<SM_TRAITS>::SmStPrioritizeRegionsStore(*v8, 1);
            if ( v5 >= 0 )
            {
              KiSetTimerEx((__int64)&unk_1403FA068, 0LL, 300000, 0, (__int64)&unk_1403FA0A8);
              v5 = 0;
            }
          }
          else
          {
            v5 = -1073741632;
          }
        }
      }
      else
      {
        v5 = -1073741637;
      }
    }
    else
    {
      v5 = -1073741735;
    }
  }
  else
  {
    v5 = -1073741306;
  }
  if ( v4 )
    KiUnstackDetachProcess(&v13, 0LL);
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v5;
}
