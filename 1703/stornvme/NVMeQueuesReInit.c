/*
 * XREFs of NVMeQueuesReInit @ 0x1C00042C8
 * Callers:
 *     NVMeHwAdapterControl @ 0x1C0001C10 (NVMeHwAdapterControl.c)
 *     NVMeControllerReset @ 0x1C0005138 (NVMeControllerReset.c)
 * Callees:
 *     memset @ 0x1C0012380 (memset.c)
 */

void *__fastcall NVMeQueuesReInit(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  void *v7; // rcx
  int v8; // eax
  void *result; // rax
  unsigned int v10; // ecx
  __int64 v11; // rdx
  unsigned int v12; // edi
  __int64 v13; // rcx
  bool v14; // zf
  void *v15; // rcx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rcx
  void *v20; // rcx
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // edx
  __int64 v24; // rcx

  v1 = (_DWORD *)(a1 + 664);
  *(_DWORD *)(a1 + 560) = 0;
  v3 = 4LL;
  do
  {
    *v1 = 0;
    v1 += 26;
    --v3;
  }
  while ( v3 );
  v4 = *(void **)(a1 + 240);
  *(_DWORD *)(a1 + 284) = 0;
  *(_WORD *)(a1 + 288) = 0;
  *(_WORD *)(a1 + 368) = 0;
  if ( *(_WORD *)(a1 + 280) )
    v5 = *(unsigned __int16 *)(a1 + 230);
  else
    v5 = *(unsigned __int16 *)(a1 + 228);
  v6 = (unsigned int)(v5 << 6) >> 2;
  if ( v6 )
    memset(v4, 0, 4LL * v6);
  v7 = *(void **)(a1 + 376);
  *(_DWORD *)(a1 + 474) = 0;
  if ( *(_WORD *)(a1 + 472) )
    v8 = *(unsigned __int16 *)(a1 + 230);
  else
    v8 = *(unsigned __int16 *)(a1 + 228);
  result = (void *)((unsigned int)(16 * v8) >> 2);
  if ( (_DWORD)result )
    result = memset(v7, 0, 4LL * (unsigned int)result);
  v10 = 0;
  if ( *(_WORD *)(a1 + 228) )
  {
    do
    {
      v11 = *(_QWORD *)(a1 + 272);
      if ( *(_QWORD *)(v11 + 16LL * v10) )
        *(_QWORD *)(v11 + 16LL * v10) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 228);
      ++v10;
    }
    while ( v10 < (unsigned int)result );
  }
  v12 = 0;
  if ( *(_WORD *)(a1 + 232) )
  {
    do
    {
      v13 = *(_QWORD *)(a1 + 544) + 136LL * v12;
      v14 = *(_WORD *)(v13 + 40) == 0;
      *(_DWORD *)(v13 + 44) = 0;
      *(_WORD *)(v13 + 48) = 0;
      *(_WORD *)(v13 + 128) = 0;
      v15 = *(void **)v13;
      if ( v14 )
        v16 = *(unsigned __int16 *)(a1 + 228);
      else
        v16 = *(unsigned __int16 *)(a1 + 230);
      v17 = (unsigned int)(v16 << 6) >> 2;
      if ( v17 )
        memset(v15, 0, 4LL * v17);
      result = (void *)*(unsigned __int16 *)(a1 + 232);
      ++v12;
    }
    while ( v12 < (unsigned int)result );
  }
  v18 = 0;
  if ( *(_WORD *)(a1 + 234) )
  {
    do
    {
      v19 = *(_QWORD *)(a1 + 552) + 168LL * v18;
      v14 = *(_WORD *)(v19 + 96) == 0;
      *(_DWORD *)(v19 + 98) = 0;
      v20 = *(void **)v19;
      if ( v14 )
        v21 = *(unsigned __int16 *)(a1 + 228);
      else
        v21 = *(unsigned __int16 *)(a1 + 230);
      v22 = (unsigned int)(16 * v21) >> 2;
      if ( v22 )
        memset(v20, 0, 4LL * v22);
      result = (void *)*(unsigned __int16 *)(a1 + 234);
      ++v18;
    }
    while ( v18 < (unsigned int)result );
  }
  v23 = 0;
  if ( *(_WORD *)(a1 + 162) )
  {
    do
    {
      v24 = v23++;
      *(_QWORD *)(32 * v24 + *(_QWORD *)(a1 + 192) + 24) = 0LL;
      result = (void *)*(unsigned __int16 *)(a1 + 162);
    }
    while ( v23 < (unsigned int)result );
  }
  return result;
}
