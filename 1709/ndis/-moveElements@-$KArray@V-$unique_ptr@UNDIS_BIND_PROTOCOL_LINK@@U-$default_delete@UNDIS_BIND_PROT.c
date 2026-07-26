/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00B3F7C
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00B07D8 (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00B4070 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00393F0 (--_G-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C00ABCE8 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00E5F98 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 i; // rdx
  __int64 v11; // r8
  _QWORD *v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r13
  NDIS_BIND_LINK_BASE *v16; // r14
  __int64 v17; // rdx
  _QWORD *v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rax
  NDIS_BIND_LINK_BASE *v21; // rdi
  volatile signed __int32 *Miniport; // rcx
  volatile signed __int32 *v23; // rcx
  unsigned int v24; // ebx
  unsigned int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // rdi
  __int64 v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v24 = a3;
      v25 = a2 - a3;
      if ( a3 < a2 )
      {
        v26 = 8LL * a3;
        do
        {
          v27 = *(_QWORD *)(a1 + 8);
          if ( v26 + v27 )
          {
            v28 = *(_QWORD *)(v27 + 8LL * (v24 + v25));
            *(_QWORD *)(v27 + 8LL * (v24 + v25)) = 0LL;
            *(_QWORD *)(v26 + v27) = v28;
          }
          ++v24;
          v26 += 8LL;
        }
        while ( v24 < a2 );
      }
      v29 = a3 + a4;
      if ( v24 < a3 + a4 )
      {
        v30 = 8LL * v24;
        v31 = v30;
        do
        {
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v31 + *(_QWORD *)(a1 + 8)));
          v32 = *(_QWORD *)(a1 + 8);
          if ( v30 + v32 )
          {
            v33 = *(_QWORD *)(v32 + 8LL * (v24 + v25));
            *(_QWORD *)(v32 + 8LL * (v24 + v25)) = 0LL;
            *(_QWORD *)(v30 + v32) = v33;
          }
          ++v24;
          v31 += 8LL;
          v30 += 8LL;
        }
        while ( v24 < v29 );
      }
      if ( v24 < a2 + a4 )
      {
        v34 = 8LL * v24;
        v35 = a2 + a4 - v24;
        do
        {
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v34 + *(_QWORD *)(a1 + 8)));
          v34 += 8LL;
          --v35;
        }
        while ( v35 );
      }
    }
    else
    {
      LODWORD(v8) = a3 + a4;
      v9 = a3 - a2;
      for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 4); i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = (_QWORD *)(v11 + 8 * i);
        if ( v12 )
        {
          v13 = (unsigned int)v8 - v9 - 1;
          v14 = *(_QWORD *)(v11 + 8 * v13);
          *(_QWORD *)(v11 + 8 * v13) = 0LL;
          *v12 = v14;
        }
        LODWORD(v8) = i;
      }
      if ( (unsigned int)v8 > a3 )
      {
        do
        {
          v15 = (unsigned int)(v8 - 1);
          v16 = *(NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v15);
          if ( v16 )
          {
            Miniport = (volatile signed __int32 *)v16[1].BindState.Miniport;
            if ( Miniport && _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
            NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v16);
            ExFreePoolWithTag(v16, 0x4C745042u);
          }
          v17 = *(_QWORD *)(a1 + 8);
          v18 = (_QWORD *)(v17 + 8 * v15);
          if ( v18 )
          {
            v19 = (unsigned int)v8 - v9 - 1;
            v20 = *(_QWORD *)(v17 + 8 * v19);
            *(_QWORD *)(v17 + 8 * v19) = 0LL;
            *v18 = v20;
          }
          LODWORD(v8) = v15;
        }
        while ( (unsigned int)v15 > a3 );
      }
      while ( (unsigned int)v8 > a2 )
      {
        v8 = (unsigned int)(v8 - 1);
        v21 = *(NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v8);
        if ( v21 )
        {
          v23 = (volatile signed __int32 *)v21[1].BindState.Miniport;
          if ( v23 && _InterlockedExchangeAdd(v23 + 12, 0xFFFFFFFF) == 1 )
            KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v23);
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v21);
          ExFreePoolWithTag(v21, 0x4C745042u);
        }
      }
    }
  }
}
