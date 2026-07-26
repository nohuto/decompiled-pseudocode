/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@AEAAXKKK@Z @ 0x1C00F0964
 * Callers:
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B9058 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C003C908 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  unsigned int v8; // r15d
  unsigned int v9; // edi
  __int64 i; // rdx
  __int64 v11; // r8
  NDIS_BIND_LINK_BASE ***v12; // r9
  unsigned int v13; // edi
  NDIS_BIND_LINK_BASE **result; // rax
  __int64 v15; // r12
  __int64 v16; // rdx
  NDIS_BIND_LINK_BASE ***v17; // r8
  unsigned int v18; // edi
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  __int64 v21; // rdx
  __int64 v22; // r8
  unsigned int v23; // r13d
  __int64 v24; // rsi
  __int64 v25; // r15
  __int64 v26; // rdx
  int v27; // ecx
  __int64 v28; // rdi
  __int64 v29; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v19 = a3;
      v20 = a2 - a3;
      if ( a3 < a2 )
      {
        v21 = 8LL * a3;
        do
        {
          v22 = *(_QWORD *)(a1 + 8);
          if ( v21 + v22 )
          {
            result = *(NDIS_BIND_LINK_BASE ***)(v22 + 8LL * (v19 + v20));
            *(_QWORD *)(v22 + 8LL * (v19 + v20)) = 0LL;
            *(_QWORD *)(v21 + v22) = result;
          }
          ++v19;
          v21 += 8LL;
        }
        while ( v19 < a2 );
      }
      v23 = a3 + a4;
      if ( v19 < a3 + a4 )
      {
        v24 = 8LL * v19;
        v25 = v24;
        do
        {
          result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v25 + *(_QWORD *)(a1 + 8)));
          v26 = *(_QWORD *)(a1 + 8);
          if ( v24 + v26 )
          {
            result = *(NDIS_BIND_LINK_BASE ***)(v26 + 8LL * (v19 + v20));
            *(_QWORD *)(v26 + 8LL * (v19 + v20)) = 0LL;
            *(_QWORD *)(v24 + v26) = result;
          }
          ++v19;
          v25 += 8LL;
          v24 += 8LL;
        }
        while ( v19 < v23 );
      }
      v27 = a2 + a4;
      if ( v19 < a2 + a4 )
      {
        v28 = 8LL * v19;
        v29 = v27 - v19;
        do
        {
          result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v28 + *(_QWORD *)(a1 + 8)));
          v28 += 8LL;
          --v29;
        }
        while ( v29 );
      }
    }
    else
    {
      v8 = a3 - a2;
      v9 = a3 + a4;
      for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 4); i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = (NDIS_BIND_LINK_BASE ***)(v11 + 8 * i);
        if ( v12 )
        {
          v13 = v9 - v8 - 1;
          result = *(NDIS_BIND_LINK_BASE ***)(v11 + 8LL * v13);
          *(_QWORD *)(v11 + 8LL * v13) = 0LL;
          *v12 = result;
        }
        v9 = i;
      }
      if ( v9 > a3 )
      {
        do
        {
          v15 = v9 - 1;
          result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v15));
          v16 = *(_QWORD *)(a1 + 8);
          v17 = (NDIS_BIND_LINK_BASE ***)(v16 + 8 * v15);
          if ( v17 )
          {
            v18 = v9 - v8 - 1;
            result = *(NDIS_BIND_LINK_BASE ***)(v16 + 8LL * v18);
            *(_QWORD *)(v16 + 8LL * v18) = 0LL;
            *v17 = result;
          }
          v9 = v15;
        }
        while ( (unsigned int)v15 > a3 );
      }
      while ( v9 > a2 )
        result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8LL * --v9));
    }
  }
  return result;
}
